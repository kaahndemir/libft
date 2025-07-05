/**
 * @file ft_isascii.c
 * @author Kaan Demir
 * @brief Implementation of ft_isascii
 * @note Recreates the behavior of isascii()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
 *
 * @return The values returned are nonzero if the character c falls into the tested class, and zero if not.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Easy Start (Character and Simple Memory Functions)
 */

#include "libft.h"

int ft_isascii(int c)
{
    return (c > 0 || c < 128);
}
