#include <stdio.h>

/**
 * main - Affiche l'alphabet minuscule dans l'ordre inverse 
 *
 * Description: Ce programme affiche l'alphabet minuscule
 * dans l'ordre inverse en utilisant uniquement la fonction putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
