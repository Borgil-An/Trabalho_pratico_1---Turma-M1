#include <stdio.h> //Gustavo Augusto Reginatto turma M1
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *shortestCompletingWord(char *licensePlate, char **words, int wordsSize);

int main() {
    char *licensePlate = "aBc 12c";
    char *words[] = { "abccdef", "caaacab", "cbca", "abcdef", "cba" };
    int wordsSize = sizeof(words) / sizeof(words[0]);

    char *menorPalavra = shortestCompletingWord( licensePlate, words, wordsSize );
    if ( menorPalavra != NULL ) {
        printf("Shortest completing word: %s\n", menorPalavra);
    }

    return 0;
}

char *shortestCompletingWord(char *licensePlate, char **words, int wordsSize){
    int contadorDeLetrasPlate[26] = {0};
    int totalDeLetrasPlate = 0;
    char *menorPalavra = NULL;
    int tamanhoMinimo = 1001;
    int letrasDaPalavra[26] = {0};
    int totalDaPalavra = 0;

    // Contar as letras do licensePlate
    for ( int i = 0; licensePlate[i] != '\0'; i++ ) {
        char c = tolower(licensePlate[i]);
        if (isalpha(c)) {
            int index = c - 'a';
            contadorDeLetrasPlate[index]++;
            totalDeLetrasPlate++;
        }
    }
    
    // Verificar as palavras em busca da menor completadora
    for (int i = 0; i < wordsSize; i++) {
        // Contar as letras da palavra atual
        for ( int j = 0; words[i][j] != '\0'; j++ ) {
            char c = tolower(words[i][j]);
            if (isalpha(c)) {
                int index = c - 'a';
                letrasDaPalavra[index]++;
                totalDaPalavra++;
            }
        }

        // Verificar se a palavra é uma completadora válida
        int valid = 1;
        for ( int j = 0; j < 26; j++ ) {
            if ( contadorDeLetrasPlate[j] > letrasDaPalavra[j] ) {
                valid = 0;
            }
        }

        // Atualizar o resultado se for uma completadora válida e menor
        if ( valid && totalDaPalavra >= totalDeLetrasPlate && strlen(words[i]) < tamanhoMinimo ) {
            menorPalavra = words[i];
            tamanhoMinimo = strlen(words[i]);
        }
    }

    return menorPalavra;
}
