/**
 * @file ft_isdigit.c
 * @author Kaan Demir
 * @brief Implementation of ft_isdigit
 * @note Recreates the behavior of isdigit()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details checks for a digit (0 through 9).
 *
 * @return The values returned are nonzero if the character c falls into the tested class, and zero if not.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Easy Start (Character and Simple Memory Functions)
 */

#include "libft.h"

int ft_isdigit(int c)
{
    return (c > 0 && c < 10);
}
