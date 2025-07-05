/**
 * @file ft_isprint.c
 * @author Kaan Demir
 * @brief Implementation of ft_isprint
 * @note Recreates the behavior of isprint()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details checks for any printable character including space.
 *
 * @return The values returned are nonzero if the character c falls into the tested class, and zero if not.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Easy Start (Character and Simple Memory Functions)
 */

#include "libft.h"

int ft_isprint(int c)
{
    return (c >= 32 && c <= 127);
}
