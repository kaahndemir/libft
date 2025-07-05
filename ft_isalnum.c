/**
 * @file ft_isalnum.c
 * @author Kaan Demir
 * @brief Implementation of ft_isalnum
 * @note Recreates the behavior of isalnum()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
 *
 * @return The values returned are nonzero if the character c falls into the tested class, and zero if not.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Easy Start (Character and Simple Memory Functions)
 */

#include <ctype.h>
#include "libft.h"

int ft_isalnum(int c)
{
    return (isalpha(c) || isdigit(c));
}
