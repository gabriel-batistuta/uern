#include <stdio.h>
main() {
    int codigo,quantidade;
    float preco,CQ=1.70,BS=2.30,BO=2.60,HA=2.40,CH=2.50,RE=1.00;
    //CQ=cachorro Quente,BA=Bauru Simples,BO=bauru com Ovo,HA=Hamburguer,CH=Cheeseburguer,RE=Refrigerante
    printf("qual o codigo do produto?\n100: Cachorro Quente\n101: Bauru Simples\n102: bauru com Ovo\n103: Hamburguer\n104: Cheeseburguer\n105: Refrigerante\n");
    scanf("%d",&codigo);
    printf("Qual a quantidade?\n");
    scanf("%d",&quantidade);
    switch (codigo) {
    case 100:
        preco=CQ*quantidade;
        printf("total a pagar: %.2f R$\n",preco);
        break;
    case 101:
        preco=BS*quantidade;
        printf("total a pagar: %.2f R$\n",preco);
        break;
    case 102:
        preco=BO*quantidade;
        printf("total a pagar: %.2f R$\n",preco);
        break;
    case 103:
        preco=HA*quantidade;
        printf("total a pagar: %.2f R$\n",preco);
        break;
    case 104:
        preco=CH*quantidade;
        printf("total a pagar: %.2f R$\n",preco);
        break;
    case 105:
        preco=RE*quantidade;
        printf("total a pagar: %.2f R$\n",preco);
        break;
    default:
        printf("Valor invalido!\n");
        break;
    }
}