# Doubly Linked Lists

Ce projet implémente des listes doublement chaînées en C.

---

## Description

Une liste doublement chaînée permet de naviguer dans les deux directions :

- Vers l'avant avec `next`
- Vers l'arrière avec `prev`

---

## Structure

Chaque nœud contient :

- `n` : un entier (données)
- `prev` : pointeur vers le nœud précédent
- `next` : pointeur vers le nœud suivant

---

## Fichiers

- `lists.h` : Fichier d'en-tête avec la structure et les prototypes
- `0-*.c`, `1-*.c`, etc. : Implémentations des fonctions

---

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c fonction.c -o programme
```

---

## Auteur

Dényss Paricard
