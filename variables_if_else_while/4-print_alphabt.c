#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules, sauf les lettres 'q' et 'e'.
 *
 * Description: Ce programme affiche toutes les lettres minuscules
 * à l'exception de 'q' et 'e', suivies d'un retour à la ligne.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
