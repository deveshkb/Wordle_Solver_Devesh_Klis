#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

int main() {
    FILE *file;
    char word[MAX_WORD_LENGTH];

    // Ouvrir le fichier
    file = fopen("ressource/bdd_wordle.txt", "r");
    
    if (file == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier\n");
        return 1;
    }

    printf("Liste des mots :\n");

    // Lire chaque mot du fichier
    while (fscanf(file, "%s", word) != EOF) {
        printf("%s\n", word);
    }

    fclose(file);
    return 0;
}
