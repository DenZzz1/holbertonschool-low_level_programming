#include <stdio.h>

/**
 * main - Affiche toutes les combinaisons possibles de nombres à un chiffre
 *
 * Description: Les nombres sont séparés par "," et imprimés
 * dans l'ordre croissant en utilisant uniquement la fonction putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
