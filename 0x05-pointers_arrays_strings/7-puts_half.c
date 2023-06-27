#include <unistd.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to a string.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	start = length / 2;

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		write(1, &str[start], 1);
		start++;
	}

	write(1, "\n", 1);
}
