/**
 * @file ft_strlen.c
 * @author Kaan Demir
 * @brief Implementation of ft_strlen
 * @note Recreates the behavior of strlen()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').
 *
 * @return The strlen() function returns the number of bytes in the string pointed to by s.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Easy Start (Character and Simple Memory Functions)
 */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i = 0;

    while (s[i])
        i++;
    
    return i;
}
