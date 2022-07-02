#include <stdio.h>
main() {
    float peso,altura,imc;
    printf("Qual o seu peso?\n");
    scanf("%f",&peso);
    printf("Qual a sua altura?\n");
    scanf("%f",&altura);
    imc = peso / (altura*altura);
    if (imc < 18.5) {
        printf("IMC = %.2f, Abaixo do peso\n",imc);
    } else if (imc >= 18.5 && imc < 25) {
        printf("IMC = %.2f, Peso normal\n",imc);
    } else if (imc >= 25 && imc < 30) {
        printf("IMC = %.2f, Acima do peso\n",imc);
    } else if (imc >= 30) {
        printf("IMC = %.2f, Obeso\n",imc);
    }
}
