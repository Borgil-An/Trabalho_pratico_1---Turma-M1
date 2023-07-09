#include <stdio.h> //Gustavo Augusto Reginatto turma M1
#include <stdlib.h>
#include <string.h>


char *shortestCompletingWord(char *licensePlate, char **words, int wordsSize)
{
    char **letrasEscolhidas;
    char **palavras[wordsSize];
    char * menorPalavra;

    letrasEscolhidas = &licensePlate;
  

 for (int i = 0; i < wordsSize; i++){
    palavras[i]= &words[i];

    if (strncmp(letrasEscolhidas,palavras[i], 15) == 0){
        if (strlen(palavras[i])< strlen(menorPalavra)){
        strcpy(menorPalavra,palavras[i]);
        printf ("%c", menorPalavra);
        }
    }
}   
return menorPalavra;
}


int main(void)
{
    char **words[] = {"step","steps","stripe","stepple"};
    char *licensePlate = {'1s3 PSt'};
    int wordsSize = 4;
    char *menorPalavra;

    menorPalavra = shortestCompletingWord(*licensePlate,**words,wordsSize);
    printf ("%c", menorPalavra);

    return 0;
}


