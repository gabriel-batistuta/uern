#include <stdio.h>
#include <stdlib.h>
int main() {
    float preco,total;
    int codigo;
    printf("Qual o valor do produto?\n");
    scanf("%f",&preco);
    printf("Como deseja pagar?\n");
    scanf("%d",&codigo);
    switch (codigo) {
    case 1:
        total = preco - preco*0.10;
        printf("Total= %.2f\n",total);
        break;
    case 2:
        total = preco - preco*0.15;
        printf("Total= %.2f\n",total);
        break;
    case 3:
        total = preco;
        printf("Total= %.2f\n",total);
        break;
    case 4:
        total = preco + preco*0.10;
        printf("Total= %.2f\n",total);
        break;
    }
}