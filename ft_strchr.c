/**
 * @file ft_strchr.c
 * @author Kaan Demir
 * @brief Implementation of ft_strchr
 * @note Recreates the behavior of strchr()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The strchr() function returns a pointer to the first occurrence of the character c in the string s. The strrchr() function returns a pointer to the last occurrence of the character c in the string s. The strchrnul() function is like strchr() except that if c is not found in s, then it returns a pointer to the null byte at the end of s, rather than NULL. Here "character" means "byte"; these functions do not work with wide or multibyte characters.
 *
 * @return The strchr() and strrchr() functions return a pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator. The strchrnul() function returns a pointer to the matched character, or a pointer to the null byte at the end of s (i.e., s+strlen(s)) if the character is not found.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Medium Difficulty (Pointer-intensive Functions)
 */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{

    while (*s)
    {
        if(*s == (char)c)
            return (char *)s;
        s++;
    }

    if(c == '\0')
        return (char *)s;

    return NULL;
}