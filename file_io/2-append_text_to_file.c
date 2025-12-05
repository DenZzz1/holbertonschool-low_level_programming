#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - ajoute du texte à la fin d'un fichier
 * @filename: nom du fichier
 * @text_content: contenu à ajouter (NULL = ne rien écrire)
 *
 * Return: 1 en cas de succès, -1 si erreur
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		w = write(fd, text_content, len);
		if (w == -1 || w != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
