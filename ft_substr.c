/**
 * @file ft_substr.c
 * @author Kaan Demir
 * @brief Implementation of ft_substr
 * @version 0.1
 * @date 2025-07-01
 *
 * @details  Allocates memory (using malloc(3)) and returns a substring from the string 's'. The substring starts at index 'start' and has a maximum length of 'len'. 
 *
 * @param s: The original string from which to create the substring. 
 * @param start: The starting index of the substring within 's'.
 * @param len: The maximum length of the substring. 
 * @return The substring. NULL if the allocation fails. 
 *
 * @note Part: Part 2: Additional Functions
 * @note Category: Medium (More Complex Logic)
 * @note Allowed functions: malloc
 */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{

    if(s == NULL)
        return NULL;

    size_t slen = (size_t)ft_strlen(s);

    if(start > slen)
    {
        char *new = (char *)malloc(1);
        *new = 0;
        return new;
    }

    size_t finallen = len;

    if (finallen > slen - start + 1)
        finallen = slen - start + 1;

    char *new = (char *)malloc(finallen * sizeof(char) + 1);
    if(new == NULL)
        return NULL;

    size_t i = 0;

    while(i < finallen && s[start + i])
    {
        new[i] = s[start + i];
        i++;
    }
    new[i] = 0;
    return new;
}