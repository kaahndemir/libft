/**
 * @file ft_strncmp.c
 * @author Kaan Demir
 * @brief Implementation of ft_strncmp
 * @note Recreates the behavior of strncmp()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The strcmp() function compares the two strings s1 and s2. The locale is not taken into account (for a lo‐ cale-aware comparison, see strcoll(3)). The comparison is done using unsigned characters. strcmp() returns an integer indicating the result of the comparison, as follows: • 0, if the s1 and s2 are equal; • a negative value if s1 is less than s2; • a positive value if s1 is greater than s2. The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and s2.
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The maximum number of bytes to be compared.
 * @return The strcmp() and strncmp() functions return an integer less than, equal to, or greater than zero if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Medium Difficulty (Pointer-intensive Functions)
 */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    
    while((*s1 || *s2) && n > 0)
    {
        if ((unsigned char)*s1 != (unsigned char)*s2)
            return (unsigned char)*s1 - (unsigned char)*s2;
        s1++;
        s2++;
        n--;
    }
    return 0;
}
