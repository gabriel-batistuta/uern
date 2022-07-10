#include <stdio.h>
main() {
    int ano;
    printf("Qual o ano?\n");
    scanf("%d",&ano);
    if (ano%400==0) {
        printf("Ano bissexto\n");
    } else if (ano%4==0 && ano%100!=0) {
        printf("Ano bissexto\n");
    } else {
        printf("Nao e bissexto\n");
    }
}