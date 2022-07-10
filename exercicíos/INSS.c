#include <stdio.h>
main() {
   char genero;
   int idade,tempoCont;
   printf("qual seu genero? (M para Masculino e F para Feminino)\n");
   scanf("%s",&genero);
   printf("qual sua idade?\n");
   scanf("%d",&idade);
   printf("tempo de contribuicao?\n");
   scanf("%d",&tempoCont);
   if (genero == 'M' && idade >= 65 && tempoCont >=10) {
       printf("Aposentavel\n");
   } else if (genero == 'M' && idade >= 63 && tempoCont >= 15) {
       printf("Aposentavel\n");
   } else if (genero == 'F' && idade >= 63 && tempoCont >= 10) {
       printf("Aposentavel\n");
   } else if (genero == 'F' && idade >= 61 && tempoCont >= 15) {
       printf("Aposentavel\n");
   } else {
       printf("Nao aposentavel!\n");
   }
}