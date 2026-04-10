# Wordle_Solver_Devesh_Klis

## Description

Ce projet est un programme en C permettant de filtrer une liste de mots afin de trouver la solution du jeu Wordle.

Le programme utilise plusieurs filtres :

* lettres à inclure
* lettres à exclure
* recherche de substring

## Compilation

```bash
mkdir bin
```
```bash
gcc src/main.c src/filtres.c -o bin/wordle_solver
```

## Exécution

```bash
./bin/wordle_solver
```

## Utilisation

Le programme demande :

* lettres à inclure (ex: ae)
* lettres à exclure (ex: zx)
* substring (ex: li)

Il affiche ensuite les mots correspondants aux filtres.

## Exemple

Entrée :
INCLURE : a
EXCLURE : z
SUBSTRING : li

Sortie :
liste de mots filtrés

## Auteurs

- Devesh
- Klis
