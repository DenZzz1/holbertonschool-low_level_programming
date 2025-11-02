#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string
 *
 * Return: integer value, or 0 if no numbers found
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

			/* Check overflow before multiplication */
			if (sign == 1)
			{
				if (result > (INT_MAX - digit) / 10)
					return (INT_MAX);
			}
			else
			{
				if (result > (INT_MAX - digit) / 10)
					return (INT_MIN);
			}

			result = result * 10 + digit;
			started = 1;
		}
		else if (started)
			break;
		i++;
	}

	return (result * sign);
}
