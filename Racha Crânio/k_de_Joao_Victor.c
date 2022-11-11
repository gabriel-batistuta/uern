// #include <stdio.h>

// main () {
//     int N;
//     printf("quantos numeros primos quer somar?\n");
//     scanf("%d",&N);
// }

// primo(N) {
//     int iter,num_primos=0,array_num_primos[6];
//     for (iter = 2; array_num_primos ; iter++) {
        
//         if (iter % jor)
//     }

// }

// somaPrimos() {

// }

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<stdlib.h> //Biblioteca para utilizar funções próprias do Sistema Operacional
main() {

int a=0,b,c,n,d; //Declarando as variáveis
printf("Quantos numeros primos pretende exibir? ");
scanf("%i",&n);
d=n*(-1);
printf("Os primeiros %i numeros primos sao:\n",n);
do //Inicio do bloco de repetição
{ a++;
c=0;
for(b=1;b<a;b++)
if(a%b==0)
c++;
if(c==1) {
printf("%i\n",a); //Imprimindo os números primos
d++;
                 }
}
while(d); //Repete o bloco enquanto d for diferente de zero 0.
printf("\n\n"); //Dá duas quebras de linha para ficar mais bonito
system("pause"); //Pausa o sistema para que o usuário possa ver os dados

}