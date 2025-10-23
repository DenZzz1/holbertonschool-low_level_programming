#include <stdio.h>

/**
 * main - Affiche tous les nombres en base 16 en minuscules.
 *
 * Description: Ce programme affiche les nombres hexadécimaux
 * (0–9 et a–f) en utilisant uniquement la fonction putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
