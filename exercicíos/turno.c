#include <stdio.h>
main() {
    char turno;
    printf("Em que turno voce estuda? M para Matutino, V para Vespertino, N para Noturno.\n");
    scanf("%c",&turno);
    if (turno == 'M' || turno == 'm') {
        printf("Bom dia!\n");
    } else if (turno == 'V' || turno == 'v') {
        printf("Boa tarde!\n");
    } else if (turno == 'N' || turno == 'n') {
        printf("Boa noite!\n");
    } else {
        printf("Valor invalido!");
    }
}