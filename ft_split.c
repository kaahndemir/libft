/**
 * @file ft_split.c
 * @author Kaan Demir
 * @brief Implementation of ft_split
 * @version 0.1
 * @date 2025-07-01
 *
 * @details  Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. The array must end with a NULL pointer. 
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split. NULL if the allocation fails. 
 *
 * @note Part: Part 2: Additional Functions
 * @note Category: Hard (Complex Allocation and Logic)
 * @note Allowed functions: malloc,free
 */

#include "libft.h"


size_t ft_separatorskip(char const *s, size_t i, char c)
{
    while(s[i] && s[i] == c)
        i++;

    return i;
}

size_t ft_tothesep(char const *s, size_t i, char c)
{
    size_t lastindex = i;

    while(s[i] != c && s[i])
    {
        lastindex = i;
        i++;
    }

    return lastindex;
}

size_t ft_countitems(char const *s, char c)
{
    size_t count = 0;
    size_t i = 0;

    // "  dashdasdhagsdh *dasjjhasdhaksjdasd*das*a*sd*asd*asdasda**"

    while(s[i])
    {
        i = ft_separatorskip(s,i, c);

        if(s[i] != c)
        {
            count++;
            while(s[i] != c)
                i++;
        }
    }
    return count;
}

void ft_freeeverything(char **a, size_t count)
{
    size_t i = 0;

    while(i < count)
    {
        free(a[i]);
        i++;
    }
}

char **ft_split(char const *s, char c)
{
    char **a = (char **)malloc((ft_countitems(s, c) + 1) * sizeof(char *));
    if(a == NULL)
        return NULL;

    size_t i = 0;
    size_t j = 0;

    while(s[i]){
        i = ft_separatorskip(s,i, c);
        size_t wordend = ft_tothesep(s, i, c);
        a[j] = ft_substr(s, i,  wordend - i + 1);
        if(a[j] == NULL)
        {
            ft_freeeverything(a, j);
            return NULL;
        }

        i = wordend + 1;
        j++;
    }

    a[j] = NULL;

    return a;
}
