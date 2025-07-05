/**
 * @file ft_isalpha.c
 * @author Kaan Demir
 * @brief Implementation of ft_isalpha
 * @note Recreates the behavior of isalpha()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)). In some locales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.
 *
 * @return The values returned are nonzero if the character c falls into the tested class, and zero if not.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Easy Start (Character and Simple Memory Functions)
 */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}