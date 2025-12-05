#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>

/**
 * read_textfile - lit un fichier texte et l'affiche sur la sortie standard.
 * @filename: le nom du fichier à lire.
 * @letters: le nombre maximum de lettres (octets) à lire et afficher.
 *
 * Return: le nombre réel de lettres lues et écrites,
 *         ou 0 en cas d'échec (ouverture, lecture, écriture, etc.).
 */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
