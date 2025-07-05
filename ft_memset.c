/**
 * @file ft_memset.c
 * @author Kaan Demir
 * @brief Implementation of ft_memset
 * @note Recreates the behavior of memset()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
 *
 * @param b The pointer to the memory area to fill.
 * @param c The character to fill the memory area with (passed as an int, but converted to an unsigned char).
 * @param len The number of bytes to be set to the value.
 * @return The memset() function returns a pointer to the memory area s.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Easy Start (Character and Simple Memory Functions)
 */

#include "libft.h"


void *ft_memset(void *b, int c, size_t len)
{
    char *a = (char *)b;
    size_t i = 0;

    while(i < len)
    {
        a[i] = (char)c;
        i++;
    }

    return b;
}