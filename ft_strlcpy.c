/**
 * @file ft_strlcpy.c
 * @author Kaan Demir
 * @brief Copies a string into a size-bounded buffer.
 * @note Recreates the behavior of strlcpy().
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The ft_strlcpy() function copies up to `dstsize - 1` characters
 * from the NUL-terminated string `src` to `dst`, NUL-terminating the result.
 *
 * @param dst The destination buffer.
 * @param src The source string.
 * @param dstsize The size of the destination buffer.
 *
 * @return The total length of the string it tried to create. That means the
 * length of `src`. If the return value is >= `dstsize`, the output string
 * has been truncated. It is the caller's responsibility to handle this.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Medium Difficulty (Pointer-intensive Functions)
 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t srclenght = ft_strlen(src);

    if(dstsize == 0)
        return srclenght;

    while(src[i] && dstsize - 1 > i)
    {
        dst[i] = src[i];
        i++;        
    }
    dst[i] = 0;
    
    return srclenght;
}