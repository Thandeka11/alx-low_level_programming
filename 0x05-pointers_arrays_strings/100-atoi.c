#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Handle optional sign */
	if (s[i] == '-' || s[i] == '+') {
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	/* Convert the string to an integer */
	while (s[i] >= '0' && s[i] <= '9') {
		int digit = s[i] - '0';

		/* Check for integer overflow */
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && digit > (INT_MAX % 10))) {
			/* Handle overflow case */
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		result = (result * 10) + digit;
		i++;
	}

	return sign * result;
}
