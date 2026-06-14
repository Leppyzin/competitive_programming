# Estrutura IF-ELSE

 Na estrutura IF-ELSE nós conseguimos controlar os fluxos mais básicos e fundamentais, isto é, execução de diferentes comandos, expressões e instruções caso uma condição seja cumprida, sendo assim analisada duas condições, verdadeiro ou falso.

```
 if(condicao){
  bloco de comandos caso a CONDICAO seja verdadeira...
} else {
  bloco de comandos caso a CONDICAO seja falsa...
}
```

**CONDICAO:** É uma expressão que permite analisar uma condição, seja ela de comparação ou de combinações de comparações. Se a **CONDICAO** for verdadeira, apenas o bloco de códigos dentro do if(**também chamado de escopo do if**) é executado. Caso contrario apenas o bloco de comandos dentro do ELSE é executado. no I

**O comando ELSE não é obrigatório!!:** No inicio da sua jornada em comandos condicionais, vale ressaltar que não é obrigatório, logo você pode colocar vários comandos condicionais em sequência. 

### IMPORTANTE!! coloque identação (a famosa TAB) dentro dos comandos associados a cada bloco.

## Extensão de IF-Else para IF-Else-IF

 Para quem já entendeu e já se acostumou com a estrutura IF-ELSE clássica, existe uma estrutura denominada **if-else-if**, cuja sintaxe é apresentada a seguir;

 ```
 if(condicao 1) {
    bloco de comandos caso a condicao 1 seja concluída...
} else if(condicao 2) {
    bloco de comandos caso a condicao 2 seja concluída...
} else if(condição 3) {
    bloco de comandos caso a condicao 3 seja concluída...
} ...


} else if(condições n){
    bloco de comando caso a condicao n seja cumprida...
}
 ```

 O fluxo de execução da estrutura funciona como uma estrutura **if-else** aninhada 
