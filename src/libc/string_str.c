#include <_string.h>
#include <_stdlib.h>

char *_strcat(char *dest, const char *src)
{
    char *dst = dest;

    // Go to the end of dest
    while (*dest != '\0')
        ++dest;

    _strcpy(dest, src);

    return dst;
}

char *_strdup(const char *s)
{
    size_t len = _strlen(s) + 1;
    char *dup = _malloc(len);

    // Can't allocate
    if (!dup)
        return NULL;

    // Set data
    _strcpy(dup, s);

    return dup;
}

int _strcmp(const char *a, const char *b)
{
    while (*a != '\0' && *a == *b)
    {
        ++a;
        ++b;
    }

    if (*a < *b)
        return -1;

    if (*a > *b)
        return 1;

    return 0;
}

char *_strcpy(char *dest, const char *src)
{
    char *dst = dest;

    while (*src != '\0')
    {
        // Set memory
        *dest = *src;

        // Update pointers
        ++dest;
        ++src;
    }

    // Terminate
    *dest = '\0';

    return dst;
}

size_t _strlen(const char *s)
{
    size_t len = 0;
    while (*(s + len) != '\0')
        ++len;

    return len;
}

char *_strncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    while (i < n && src[i] != '\0')
    {
        // Set memory
        dest[i] = src[i];

        ++i;
    }

    // Zero the tail
    while (i <= n)
    {
        dest[i] = '\0';
        ++i;
    }

    return dest;
}
