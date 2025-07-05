/**
 * @file ft_strtrim.c
 * @author Kaan Demir
 * @brief Implementation of ft_strtrim
 * @version 0.1
 * @date 2025-07-01
 *
 * @details  Allocates memory (using malloc(3)) and returns a copy of 's1' with characters from 'set' removed from the beginning and the end. 
 *
 * @param s1: The string to be trimmed. set: The string containing the set of characters to be removed. 
 * @return The trimmed string. NULL if the allocation fails. 
 *
 * @note Part: Part 2: Additional Functions
 * @note Category: Medium (More Complex Logic)
 * @note Allowed functions: malloc
 */

#include "libft.h"

static int ft_isinset(char a, char const *set)
{
    int inset = 0;
    int i = 0;

    // iterate set
    while(set[i])
    {
        if(a == set[i])
            inset = 1;
        i++;
    }

    return inset;
}

static int ft_getstart(char const *s1, char const *set)
{

    int i = 0;

    // iterate string and get the farest right
    while(s1[i])
    {
        if(!ft_isinset(s1[i], set))
            return i;
        i++;
    }

    return i;
}

static int ft_getend(char const *s1, char const *set)
{

    int i = ft_strlen(s1) - 1;

    // iterate string and get the farest left
    while(i >= 0 && s1[i])
    {
        if(!ft_isinset(s1[i], set))
            return i;
        i--;
    }

    return i;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start = ft_getstart(s1, set);
    int end = ft_getend(s1, set);

    if(start > end)
        return ft_strdup("");

    int len = end - start + 1;

    char *a = ft_substr(s1, start, len);
    if(a == NULL)
        return NULL;

    return a;
}

