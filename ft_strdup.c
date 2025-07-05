/**
 * @file ft_strdup.c
 * @author Kaan Demir
 * @brief Implementation of ft_strdup
 * @note Recreates the behavior of strdup()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The strdup() function returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc(3), and can be freed with free(3). The strndup() function is similar, but copies at most n bytes. If s is longer than n, only n bytes are copied, and a terminating null byte ('\0') is added. strdupa() and strndupa() are similar, but use alloca(3) to allocate the buffer.
 *
 * @return On success, the strdup() function returns a pointer to the duplicated string. It returns NULL if insuffi‐ cient memory was available, with errno set to indicate the error.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Hard (Memory Allocation)
 */

#include "libft.h"


char *ft_strdup(const char *s1)
{
    size_t s1len = ft_strlen(s1);
    char *string = malloc(sizeof(char) * (s1len + 1));
    if(string == NULL)
        return NULL;

    ft_strlcpy(string, s1, s1len + 1);

    return string;
}