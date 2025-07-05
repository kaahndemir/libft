/**
 * @file ft_strjoin.c
 * @author Kaan Demir
 * @brief Implementation of ft_strjoin
 * @version 0.1
 * @date 2025-07-01
 *
 * @details  Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating 's1' and 's2'. 
 *
 * @param s1: The prefix string. s2: The suffix string. 
 * @return The new string. NULL if the allocation fails. 
 *
 * @note Part: Part 2: Additional Functions
 * @note Category: Medium (More Complex Logic)
 * @note Allowed functions: malloc
 */

#include "libft.h"

static char *ft_justjoin(char const *s1, char const *s2)
{
    if(s1 == NULL || s2 == NULL)
        return NULL;

    int s1len = ft_strlen(s1);    
    int s2len = ft_strlen(s2);    

    int totallen = s1len + s2len;

    char *a = malloc( totallen + 1);
    if(a == NULL)
        return NULL;

    int i = 0;

    while(i < s1len)
    {
        a[i] = s1[i];
        i++;
    }
    
    i = 0;
    
    while(i < s2len)
    {
        a[i + s1len] = s2[i];
        i++;
    }
    a[i + s1len] = 0;

    return a;
}

char *ft_strjoin(char const *s1, char const *s2)
{

    if(s1 == NULL && s2 == NULL)
        return NULL;
    if(s1 == NULL)
        return ft_justjoin((char const *){""}, s2);
    if(s2 == NULL)
        return ft_justjoin(s1, (char const *){""});

    return ft_justjoin(s1, s2);
}