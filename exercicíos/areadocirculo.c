#include <stdio.h>
    main() {
        double raio, pi, A, raioq;
        scanf("%lf",&raio);
        pi = 3.14159;
        raioq=pow(raio, 2);
        A=raioq*pi;
        printf("A=%.4lf\n",A);
        return 0;
    }