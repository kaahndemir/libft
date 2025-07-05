/**
 * @file ft_memcpy.c
 * @author Kaan Demir
 * @brief Implementation of ft_memcpy
 * @note Recreates the behavior of memcpy()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas must not overlap. Use memmove(3) if the memory areas do overlap.
 *
 * @return The memcpy() function returns a pointer to dest.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Medium Difficulty (Pointer-intensive Functions)
 */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *a = (unsigned char *)dst;
    unsigned char *b = (unsigned char *)src;

    unsigned int i = 0;

    while (n > i)
    {
        a[i] = b[i];
        i++; 
    }

    return dst;
}
