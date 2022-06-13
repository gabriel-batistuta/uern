#include <stdio.h>
    main() {
        int NUMBER,HOUR;
        float valorhora, SALARY;
        scanf("%d%d%f",&NUMBER,&HOUR,&valorhora);
        SALARY=HOUR*valorhora;
        printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER,SALARY);
        return 0;
    }