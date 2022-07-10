#include <stdio.h>
main() {
    char f_or_c;
    int temp,f,c;
    printf("a temperatura atual e Fahrenheit ou Celsius? (F para Fahrenheit e C para Celsius)\n");
    scanf("%c",&f_or_c);
    printf("qual e a temperatura?\n");
    scanf("%d",&temp);
    switch (f_or_c) {
    case 'F':
        c = 0.55555555555 * (temp - 32);
        printf("A temperatura atual em Celsius e %d\n",c);
        break;
    case 'C':
        f = (temp * 1.8) + 32;
        printf("A temperatura atual em Fahrenheit e %d\n",f);
        break;
    default:
        printf("valor invalido!\n");
        break;
    }
}

