// Pedro Miranda RM: 562117
// Pedro Luis RM:564441
// Israel RM: 563435


#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função de Fibonacci
void fibonacci() {
    int N;
    int vetor[50];

    printf("Digite a quantidade de termos da sequencia de Fibonacci (1 a 50): ");
    scanf("%d", &N);

    if (N < 1 || N > 50) {
        printf("Número inválido. Tente novamente.\n");
        return;
    }

    vetor[0] = 0;
    if (N > 1) vetor[1] = 1;

    for (int i = 2; i < N; i++) {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }

    printf("Sequencia de Fibonacci: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


void verificar_palindromo() {
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

    return ;
}
void verificarSubstring() {
    char str1[101], str2[101];

    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strstr(str1, str2) != NULL)
        printf("A segunda string esta contida na primeira.\n");
    else
        printf("A segunda string Nao esta contida na primeira.\n");
}

