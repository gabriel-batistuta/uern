#include <stdio.h>
main() {
    int senha;
    printf("qual a senha?\n");
    scanf("%d",&senha);
    if (senha == 1234) {
        printf("ACESSO PERMITIDO\n");
    } else {
        printf("ACESSO NEGADO\n");
    }
}