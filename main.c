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

// Função para mostrar os fatoriais de 1 a N
void mostrar_fatoriais() {
    int N;
    do {
        printf("Digite um numero inteiro entre 1 e 20: ");
        scanf("%d", &N);
        if (N < 1 || N > 20) {
            printf("Entrada inválida. Tente novamente.\n");
        }
    } while (N < 1 || N > 20);

    for (int i = 1; i <= N; i++) {
        printf("%d! = %d\n", i, fatorial(i));
    }
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

// Menu de opções
void menu() {
    char opcao;
    do {
        printf("\n===== MENU DE EXERCICIOS =====\n");
        printf("1 - Sequencia de Fibonacci\n");
        printf("2 - Fatoriais\n");
        printf("3 - Verificar Palindromo\n");
        printf("4 - Verificar Substring\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                fibonacci();
                break;
            case '2':
                mostrar_fatoriais();
                break;
            case '3':
                verificar_palindromo();
                break;
            case '4':
                verificarSubstring();
                break;
            case '0':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção invalida.\n");
        }
    } while (opcao != '0');
}

// Função principal
int main() {
    menu(); // Chama o menu
    return 0;
}


