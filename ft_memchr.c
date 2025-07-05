/**
 * @file ft_memchr.c
 * @author Kaan Demir
 * @brief Implementation of ft_memchr
 * @note Recreates the behavior of memchr()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char. The memrchr() function is like the memchr() function, except that it searches backward from the end of the n bytes pointed to by s instead of forward from the beginning. The rawmemchr() function is similar to memchr(), but it assumes (i.e., the programmer knows for certain) that an instance of c lies somewhere in the memory area starting at the location pointed to by s. If an instance of c is not found, the behavior is undefined. Use either strlen(3) or memchr(3) instead.
 *
 * @param s A pointer to the memory area to be scanned.
 * @param c The character to be searched for (represented as an int).
 * @param n The number of bytes to be scanned.
 * @return The memchr() and memrchr() functions return a pointer to the matching byte or NULL if the character does not occur in the given memory area. The rawmemchr() function returns a pointer to the matching byte.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Medium Difficulty (Pointer-intensive Functions)
 */
-------- -1----- -------- --------


#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *a = (unsigned char*)s;
    unsigned char b = (unsigned char)c;

    int i = 0;

    while (n > i)
    {
        if(*a == b)
            return a;
        a++;
        i++;
    }

    return NULL;
}