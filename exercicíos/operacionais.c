#include <stdio.h>
main() {
   int a,b,res;
   char oper;
   scanf("%d%d",&a,&b);
   getchar();
   scanf("%c", &oper);
   switch (oper) {
   case '+':
       res= a+b;
       printf("%d\n",res);
       break;
   case '-':
       res= a-b;
       printf("%d\n",res);
       break;
   case '*':
       res= a*b;
       printf("%d\n",res);
       break;
   case '/':
       res= a/b;
       printf("%d\n",res);
       break;
   default: printf("operacao invalida!\n");
       break;
   }
}
 
