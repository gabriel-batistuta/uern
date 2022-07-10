#include <stdio.h>
main() {
    int codigo;
    float compra,valorFinal;
    printf("qual o valor da compra?\n");
    scanf("%f",&compra);
    printf("qual tipo de cliente?\n(1)Cliente comum\n(2)Funcionario\n(3)Cliente VIP\n");
    scanf("%d",&codigo);
    if (codigo==1) {
        valorFinal=compra;
        printf("TOTAL= %.2f R$",valorFinal);
    } else if (codigo==2) {
        valorFinal=compra-(compra*0.15);
        printf("TOTAL= %.2f R$",valorFinal);
    } else if(codigo==3) {
        valorFinal=compra-(compra*0.10);
        printf("TOTAL= %.2f R$",valorFinal);
    }
}