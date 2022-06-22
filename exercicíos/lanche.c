#include <stdio.h>
    main() {
        int codigo,quant;
        float precoCQ,precoXS,precoXB,precoTS,precoRE;
        precoCQ = 4.00;
        precoXS = 4.50;
        precoXB = 5.00;
        precoTS = 2.00;
        precoRE = 1.50;
        scanf("%d%d",&codigo,&quant);
        if (codigo == 1) {
            printf("Total: R$ %.2f\n",precoCQ*quant);
        }   else if (codigo == 2) {
            printf("Total: R$ %.2f\n",precoXS*quant);
        }   else if (codigo == 3) {
            printf("Total: R$ %.2f\n",precoXB*quant);
        }   else if (codigo == 4) {
            printf("Total: R$ %.2f\n",precoTS*quant);
        }   else {
            printf("Total: R$ %.2f\n",precoRE*quant);
        }
    }