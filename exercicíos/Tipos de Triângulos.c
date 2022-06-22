#include <stdio.h>
main() {
    float a,b,c,y;
    scanf("%f%f%f",&a,&b,&c);
    if (a < b) {
        y = a; a = b; b = y;
    }
    if (b < c) {
        y = b; b = c; c = y; 
    }
    if (a < b) {
        y = a; a = b; b = y; 
    }
    if (a>=b+c) {
        printf("NAO FORMA TRIANGULO\n");
    } else if (a*a==b*b+c*c) {
        printf("TRIANGULO RETANGULO\n");
    } else if (a*a>b*b+c*c) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else if (a*a<b*b+c*c) {
        printf("TRIANGULO ACUTANGULO\n");
    } 
    if (a==b && b==c) {
        printf("TRIANGULO EQUILATERO\n");
    } else if (a==b || b==c || c==a) {
        printf("TRIANGULO ISOSCELES\n");
    }
}