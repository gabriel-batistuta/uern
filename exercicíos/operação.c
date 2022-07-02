#include <stdio.h>
main() {
    int num,oper;
    printf("qual o numero?\n");
    scanf("%d",&num);
    printf("1 o numero e par ou impar?, 2 o numero e positivo ou negativo.\n");
    scanf("%d",&oper);
    if (oper == 1) {
        if (num % 2 == 0) {
            printf("%d = PAR\n",num);
        } else {
            printf("%d = IMPAR\n",num);
        }
    } else if (oper == 2) {
        if (num > 0) {
            printf("%d = POSITIVO\n",num);
        } else if (num < 0) {
            printf("%d = NEGATIVO\n",num);
        }
    }
}