#include <stdio.h>
main() {
    char letra;
    printf("Qual a letra a ser analisada?\n");
    scanf("%c",&letra);
    switch (letra)
    {
    case 'a':
        printf("Vogal\n");
        break;
    case 'e':
        printf("Vogal\n");
        break;
    case 'i':
        printf("Vogal\n");
        break;
    case 'o':
        printf("Vogal\n");
        break;
    case 'u':
        printf("Vogal\n");
        break;
    case 'b':
        printf("Consoante\n");
        break;
    case 'c':
        printf("Consoante\n");
        break;
    case 'd':
        printf("Consoante\n");
        break;
    case 'f':
        printf("Consoante\n");
        break;
    case 'g':
        printf("Consoante\n");
        break;
    case 'h':
        printf("Consoante\n");
        break;
    case 'j':
        printf("Consoante\n");
        break;
    case 'k':
        printf("Consoante\n");
        break;
    case 'l':
        printf("Consoante\n");
        break;
    case 'm':
        printf("Consoante\n");
        break;
    case 'n':
        printf("Consoante\n");
        break;
    case 'p':
        printf("Consoante\n");
        break;
    case 'q':
        printf("Consoante\n");
        break;
    case 'r':
        printf("Consoante\n");
        break;
    case 's':
        printf("Consoante\n");
        break;
    case 't':
        printf("Consoante\n");
        break;
    case 'v':
        printf("Consoante\n");
        break;
    case 'w':
        printf("Consoante\n");
        break;
    case 'x':
        printf("Consoante\n");
        break;
    case 'y':
        printf("Consoante\n");
        break;
    case 'z':
        printf("Consoante\n");
        break;
    default:
        printf("Caractere invalido!\n");
        break;
    } /* nesse código é melhor adicionar todas as consoantes uma por uma ao invés do default, porque senão consideraria qualquer outro caractere como consoante, então NÃO estaria 100% certo */
}