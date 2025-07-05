/**
 * @file ft_toupper.c
 * @author Kaan Demir
 * @brief Implementation of ft_toupper
 * @note Recreates the behavior of toupper()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details If c is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation ex‐ ists in the current locale. Otherwise, it returns c. The toupper_l() function performs the same task, but uses the locale referred to by the locale handle locale. If c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation ex‐ ists in the current locale. Otherwise, it returns c. The tolower_l() function performs the same task, but uses the locale referred to by the locale handle locale. If c is neither an unsigned char value nor EOF, the behavior of these functions is undefined. The behavior of toupper_l() and tolower_l() is undefined if locale is the special locale object LC_GLOBAL_LOCALE (see duplocale(3)) or is not a valid locale object handle.
 *
 * @return The value returned is that of the converted letter, or c if the conversion was not possible.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Easy Start (Character and Simple Memory Functions)
 */

#include "libft.h"

static int ft_islower(int a)
{
    return (a >= 97 && a <= 122);
}

int ft_toupper(int c)
{
    if (ft_islower(c))
            c = c - 32;
    return c;
}
