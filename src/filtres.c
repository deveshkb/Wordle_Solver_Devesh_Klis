#include <string.h>
#include "../include/filtres.h"

// Vérifie si le mot contient une lettre
int contient_lettre(char *mot, char lettre) {
    for (int i = 0; mot[i] != '\0'; i++) {
        if (mot[i] == lettre) {
            return 1;
        }
    }
    return 0;
}

// Vérifie si le mot n'a PAS une lettre
int exclut_lettre(char *mot, char lettre) {
    return !contient_lettre(mot, lettre);
}
int contient_substring(char *mot, char *substring) {
    return strstr(mot, substring) != NULL;
}
