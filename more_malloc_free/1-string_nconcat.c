#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to new allocated space containing s1 + first n bytes of s2,
 *         NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* compute lengths */
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	/* if n >= len2, use whole s2 */
	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	/* copy s1 */
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	/* copy first n bytes of s2 */
	for (j = 0; j < n; j++)
		new_str[len1 + j] = s2[j];

	new_str[len1 + n] = '\0';

	return (new_str);
}
