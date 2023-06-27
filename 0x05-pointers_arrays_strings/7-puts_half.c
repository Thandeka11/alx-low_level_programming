/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to a string.
 */
void puts_half(char *str)
{
	int length = 0;
	int half_length;
	int i;

	if (str == NULL)
		return;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		half_length = length / 2;
	else
		half_length = (length - 1) / 2;

	for (i = half_length; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
