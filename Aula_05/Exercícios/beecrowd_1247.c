#include <stdio.h>

int main (){
  int d, vf, vg;
  int velototal1, velototal2;
  
  while(scanf("%d%d%d", &d, &vf, &vg) != EOF){
    
    if (vg * vg * 144 >= vf * vf * (d*d + 144)){
      printf("S\n");
    } else {
        printf("N\n");
    }
  }

  return 0;
}
