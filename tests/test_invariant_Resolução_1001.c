#include <check.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

START_TEST(test_buffer_overflow_scanf)
{
    // Invariant: Buffer reads never exceed the declared length; oversized input must not cause crashes
    const char *payloads[] = {
        "12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890",  // 10x overflow
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",  // 256 bytes
        "42 38",  // valid input
    };
    int num_payloads = sizeof(payloads) / sizeof(payloads[0]);

    for (int i = 0; i < num_payloads; i++) {
        pid_t pid = fork();
        ck_assert_int_ne(pid, -1);

        if (pid == 0) {
            // Child: redirect payload as stdin and run the program
            FILE *fp = fopen("/tmp/test_input.txt", "w");
            fprintf(fp, "%s\n", payloads[i]);
            fclose(fp);
            freopen("/tmp/test_input.txt", "r", stdin);
            freopen("/dev/null", "w", stdout);
            // Include and execute main from the source
            #define main resolucao_main
            #include "../Aula_01/Exercicios_Resoluções/Resolução_1001.c"
            #undef main
            _exit(0);
        } else {
            int status;
            waitpid(pid, &status, 0);
            // Process must not crash (no signal-based termination)
            ck_assert_msg(!WIFSIGNALED(status),
                "Program crashed with signal %d on payload %d (possible buffer overflow)",
                WTERMSIG(status), i);
        }
    }
}
END_TEST

Suite *security_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Security");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_buffer_overflow_scanf);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = security_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}