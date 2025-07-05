/**
 * @file ft_strmapi.c
 * @author Kaan Demir
 * @brief Implementation of ft_strmapi
 * @version 0.1
 * @date 2025-07-01
 *
 * @details  Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to store the results from the successive applications of f. 
 *
 * @param s: The string to iterate over. f: The function to apply to each character. 
 * @return The string created from the successive applications of 'f'. Returns NULL if the allocation fails. 
 *
 * @note Part: Part 2: Additional Functions
 * @note Category: Medium (More Complex Logic)
 * @note Allowed functions: malloc
 */

#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if(s == NULL)
        return NULL;

    int strlen = ft_strlen(s);

    char *a = malloc(strlen + 1);
    if (a == NULL)
        return NULL;


    int i = 0;

    while(s[i])
    {
        a[i] = f(i, s[i]);
        i++;
    }

    a[i] = 0;

    return a;
}