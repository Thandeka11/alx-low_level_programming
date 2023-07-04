/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search within.
 * @accept: The characters to match.
 *
 * Return: The number of bytes in the initial
 * segment of s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	int found;

	for (i = 0; s[i]; i++)
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
	}

	return count;
}
