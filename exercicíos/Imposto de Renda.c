#include <stdio.h>
main() {
    float sal,valorTotal,desc2Mil,desc3Mil;
    scanf("%f",&sal);
    if (sal <= 2000.00) {
        printf("Isento");
    } else if (sal >= 2000.01 && sal <= 3000.00) {
        valorTotal = sal * (8/100);
        printf("R$ %.2f",valorTotal);
    } else if (sal >= 3000.01 && sal <= 4500.00) {
        valorTotal = sal * (18/100);
        printf("R$ %.2f",valorTotal);
    } else if (sal > 4500.00) {
        valorTotal = sal * (28*100);
        printf("R$ %.2f",valorTotal);
    }
}