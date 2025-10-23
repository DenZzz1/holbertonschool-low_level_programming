#include <stdio.h>

/**
 * main - Affiche tous les nombres à un chiffre de base 10 à partir de 0.
 *
 * Description: Ce programme affiche les chiffres de 0 à 9 en utilisant uniquement
 * la fonction putchar et sans utiliser aucune variable de type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	putchar(n + '0');
	putchar('\n');

	return (0);
}
