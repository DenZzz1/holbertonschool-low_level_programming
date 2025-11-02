#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string
 *
 * Return: the integer value, or 0 if none
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			/* Prevent overflow before multiplying */
			if (sign == 1)
			{
				if (result > (INT_MAX - digit) / 10)
					return (INT_MAX);
			}
			else
			{
				if (result > (INT_MAX - (digit - 1)) / 10)
					return (INT_MIN);
			}

			result = result * 10 + digit;
			started = 1;
		}
		else if (started)
			break;
		i++;
	}

	/* No unsigned comparison — handle INT_MIN safely */
	if (sign == -1)
	{
		if (result == INT_MAX + 1) /* Equivalent to 2147483648 without 'U' */
			return (INT_MIN);
		return (-result);
	}

	return (result);
}
