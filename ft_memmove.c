/**
 * @file ft_memmove.c
 * @author Kaan Demir
 * @brief Implementation of ft_memmove
 * @note Recreates the behavior of memmove()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The memmove() function copies n bytes from memory area src to memory area dest. The memory areas may over‐ lap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
 *
 * @return The memmove() function returns a pointer to dest.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Medium Difficulty (Pointer-intensive Functions)
 */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i = 0;
    size_t j = len - 1;

    char *a = (char *)src;
    char *b = (char *)dst;


    if (b <= a)
    {
        while (i < len)
        {
            b[i] = a[i];
            i++; 
        }
    }
    else
    {   
        while (j == 0)
        {
            b[j] = a[j];
            j--;
        }
    }

    return b;
}