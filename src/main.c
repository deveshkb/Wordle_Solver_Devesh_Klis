#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/filtres.h"

#define MAX_WORD_LENGTH 100

int main() {
    FILE *file;
    char word[MAX_WORD_LENGTH];
    char lettre;

    file = fopen("ressource/bdd_wordle.txt", "r");
    
    if (file == NULL) {
        printf("Erreur fichier\n");
        return 1;
    }

    printf("Entrer une lettre a filtrer : ");
    scanf(" %c", &lettre);

    printf("\nMots contenant '%c' :\n", lettre);

    while (fscanf(file, "%s", word) != EOF) {
        if (contient_lettre(word, lettre)) {
            printf("%s\n", word);
        }
    }

    fclose(file);
    return 0;
}
