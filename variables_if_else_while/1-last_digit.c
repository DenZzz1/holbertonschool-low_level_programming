#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  Prints the last digit of a randomly generated number.
 *
 * Description: Ce programme attribue un nombre aléatoire à la variable n
 * à chaque fois qu'il est exécuté et affiche le dernier chiffre de n.
 * Il indique également si le dernier chiffre est supérieur à 5,
 * égal à 0 ou inférieur à 6 et différent de 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
