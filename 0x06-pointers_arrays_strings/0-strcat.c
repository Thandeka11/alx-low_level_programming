#include <stddef.h>

char *_strcat(char *dest, const char *src)
{
    char *dest_ptr = dest;
    
    // Find the end of the destination string
    while (*dest_ptr != '\0')
        dest_ptr++;
    
    // Concatenate the source string to the destination string
    while (*src != '\0') {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }
    
    // Add the terminating null byte
    *dest_ptr = '\0';
    
    return dest;
}
