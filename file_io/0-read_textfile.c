#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - lit un fichier texte et l'affiche sur la sortie standard.
 * @filename: nom du fichier à lire.
 * @letters: nombre maximum de lettres à lire et afficher.
 * Return: nombre réel de lettres lues et écrites, 0 en cas d'erreur.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t r, w;
char *buff;

if (filename == NULL || letters == 0)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buff = malloc(sizeof(char) * (letters));
if (buff == NULL)
{
close(fd);
return (0);
}

r = read(fd, buff, letters);
if (r <= 0)
{
free(buff);
close(fd);
return (0);
}

w = write(STDOUT_FILENO, buff, r);
free(buff);
close(fd);
if (w != r)
return (0);

return (w);
}
