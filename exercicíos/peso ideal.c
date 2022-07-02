#include <stdio.h>
main() {
    int genero;
    float alt,pesoIdeal;
    printf("qual sua altura?\n");
    scanf("%f",&alt);
    printf("qual seu genero? 1:feminino, 2:masculino)\n");
    scanf("%d",&genero);
    if (genero == 1) {
        pesoIdeal = (62.1 * alt) - 44.7;
        printf("%f\n",pesoIdeal);
    } else if (genero == 2) {
        pesoIdeal = (72.7 * alt) - 58;
        printf("%f\n",pesoIdeal);
    }
}