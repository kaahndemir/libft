/**
 * @file ft_bzero.c
 * @author Kaan Demir
 * @brief Implementation of ft_bzero
 * @note Recreates the behavior of bzero()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area. The explicit_bzero() function performs the same task as bzero(). It differs from bzero() in that it guarantees that compiler optimizations will not remove the erase operation if the compiler deduces that the operation is "unnecessary".
 *
 * @return None.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Easy Start (Character and Simple Memory Functions)
 */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char *a = (char *)s;

    while(n > 0)
    {
            a[n] = 0;
            n--;
    }
}