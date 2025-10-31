#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value, or 0 if no numbers found
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
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (sign == 1 && (result > (INT_MAX - digit) / 10))
				return (INT_MAX);
			if (sign == -1 && (-result < (INT_MIN + digit) / 10))
				return (INT_MIN);

			result = (result * 10) + digit;
			started = 1;
		}
		else if (started)
			break;
		i++;
	}
	return (result * sign);
}
