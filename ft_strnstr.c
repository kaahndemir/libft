/**
 * @file ft_strnstr.c
 * @author Kaan Demir
 * @brief Implementation of ft_strnstr
 * @note Recreates the behavior of strnstr()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched. Characters that appear after a '\0' character are not searched.
 *
 * @param haystack The string to be searched.
 * @param needle The string to search for.
 * @param len The maximum number of characters to search.
 * 
 * @return If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Medium Difficulty (Pointer-intensive Functions)
 */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if(needle[0] == '\0')
        return (char *)haystack;

    if(len == 0)
        return NULL;

    size_t stackp = 0;
    size_t needlp = 0;

    while(haystack[stackp] && len > stackp)
    {
        while(haystack[stackp + needlp] == needle[needlp] && len > stackp + needlp)
        {
            if (needle[needlp + 1] == '\0')
                return &((char *)haystack)[stackp];
            needlp++;
        }
        stackp++;
        needlp = 0;
    }
    return NULL;
}