#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/filtres.h"

#define MAX_WORD_LENGTH 100
#define MAX_LETTERS 10

int main() {
    FILE *file;
    char word[MAX_WORD_LENGTH];

    char incluses[MAX_LETTERS];
    char exclues[MAX_LETTERS];

    file = fopen("ressource/bdd_wordle.txt", "r");
    
    if (file == NULL) {
        printf("Erreur fichier\n");
        return 1;
    }

    printf("Entrer les lettres a INCLURE (ex: ae) : ");
    scanf("%s", incluses);

    printf("Entrer les lettres a EXCLURE (ex: zx) : ");
    scanf("%s", exclues);

    printf("\nMots filtres :\n");

    while (fscanf(file, "%s", word) != EOF) {

        int valide = 1;

        // Vérifier les lettres incluses
        for (int i = 0; incluses[i] != '\0'; i++) {
            if (!contient_lettre(word, incluses[i])) {
                valide = 0;
                break;
            }
        }

        // Vérifier les lettres exclues
        for (int i = 0; exclues[i] != '\0'; i++) {
            if (!exclut_lettre(word, exclues[i])) {
                valide = 0;
                break;
            }
        }

        if (valide) {
            printf("%s\n", word);
        }
    }

    fclose(file);
    return 0;
}
