#include <stdio.h>
main() {
    char letra;
    printf("qual a letra?\n");
    scanf("%c",&letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("VOGAL\n");
    } else if (
        letra == 'b' || letra == 'c' || letra == 'd' || letra== 'f' || letra == 'g' || letra == 'h' || letra == 'j' || letra == 'k' || letra == 'l' || letra == 'm' || letra == 'n' || letra == 'p' || letra == 'q' || letra == 'r' || letra == 's' || letra == 't' || letra == 'v' || letra == 'w' || letra == 'x' || letra == 'y' || letra == 'z'
        ) {
            printf("CONSOANTE\n");
    }
}