#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase
 *
 * Description: Ce programme affiche d'abord l'alphabet minuscule,
 * puis l'alphabet majuscule, suivi d'une nouvelle ligne.
 * Il utilise uniquement la fonction putchar à trois reprises.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
