/**
 * @file ft_memcmp.c
 * @author Kaan Demir
 * @brief Implementation of ft_memcmp
 * @note Recreates the behavior of memcmp()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
 *
 * @return The memcmp() function returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2. For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) that differ in s1 and s2. If n is zero, the return value is zero.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Medium Difficulty (Pointer-intensive Functions)
 */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{

    unsigned char *a = (unsigned char*)s1;
    unsigned char *b = (unsigned char*)s2;

    while(n > 0)
    {
        if (*a != *b)
            return *a - *b;
        a++;
        b++;
        n--;
    }
    return 0;
}
