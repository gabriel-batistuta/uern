#include <stdio.h>
main() {
    int a,b,c;
    printf("Digite o primeiro numero\n");
    scanf("%d",&a);
    printf("Digite o segundo numero\n");
    scanf("%d",&b);
    printf("Digite o terceiro numero\n");
    scanf("%d",&c);
    if (a > b && a > c) {
        printf("MAIOR = %d\n",a);
    } else if (b > a && b > c) {
        printf("MAIOR = %d\n",b);
    } else if (c >a && c > b) {
        printf("MAIOR = %d\n",c);
    }
    if (a < b && a < c) {
        printf("MENOR = %d\n",a);
    } else if (b < a && b < c) {
        printf("MENOR = %d\n",b);
    } else if (c < a && c < b) {
        printf("MENOR = %d\n",c);
    }
}