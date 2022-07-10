#include <stdio.h>
main() {
    char conc;
    printf("Qual o conceito da aula?\n");
    scanf("%c",&conc);
    switch (conc)
    {
    case 'A':
        printf("Significado:\nExcelente\n");
        break;
    case 'B':
        printf("Significado:\nOtimo\n");
        break;
    case 'C':
        printf("Significado:\nBom\n");
        break;
    case 'D':
        printf("Significado:\nRuim\n");
        break;
    case 'E':
        printf("Significado:\nNos vemos de novo ano que vem...\n");
        break;
    default:
        printf("ERRO");
        break;
    }
}