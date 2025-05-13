#include <stdio.h>
#include <stdlib.h>

int main() {
    char palavra[101];
    int i, tamanho, palindromo = 1;

    printf("Digite uma palavra (sem espacos, ate 100 caracteres): ");
    scanf("%100s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        char caractereInicio = palavra[i];
        char caractereFim = palavra[tamanho - 1 - i];

        if (caractereInicio != caractereFim) {
            palindromo = 0;
            break;
        }
    }


    if (palindromo) {
        printf("A palavra \"%s\" e um palindromo.\n", palavra);
    } else {
        printf("A palavra \"%s\" nao e um palindromo.\n", palavra);
    }

    return 0;
}
