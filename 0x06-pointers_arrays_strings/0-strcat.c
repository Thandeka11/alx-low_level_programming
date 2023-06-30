char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	// Find the length of the destination string
	while (dest[dest_len] != '\0')
		dest_len++;

	// Append the source string to the destination string
	while (src[i] != '\0') {
		dest[dest_len + i] = src[i];
		i++;
	}

	// Add the terminating null byte
	dest[dest_len + i] = '\0';

	return dest;
}
