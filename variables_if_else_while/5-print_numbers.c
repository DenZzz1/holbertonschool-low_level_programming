#include <stdio.h>

/**
 * main - Affiche tous les nombres à un chiffre de base 10 à partir de 0.
 *
 * Description: Ce programme affiche tous les nombres à un chiffre en base 10
 * en commençant par 0, suivi d'une nouvelle ligne.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");

	return (0);
}
