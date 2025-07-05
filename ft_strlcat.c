/**
 * @file ft_strlcat.c
 * @author Kaan Demir
 * @brief Implementation of ft_strlcat
 * @note Recreates the behavior of strlcat()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details Appends the NUL-terminated string `src` to the end of `dst`.
 * It will append at most `dstsize - strlen(dst) - 1` bytes, NUL-terminating
 * the result (as long as `dstsize` is larger than `strlen(dst)`).
 *
 * @param dst The destination buffer. This must be a NUL-terminated string.
 * @param src The source string to append.
 * @param dstsize The full size of the destination buffer.
 *
 * @return The total length of the string it tried to create. This means the
 * initial length of `dst` plus the length of `src`. If the return value is >=
 * `dstsize`, the output string has been truncated.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Medium Difficulty (Pointer-intensive Functions)
**/

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t destlen = ft_strlen(dst);
    size_t srclen = ft_strlen(src);
    size_t j = 0;

    if(destlen >= dstsize)
        return destlen + srclen;

    while (src[j] &&  j < dstsize - destlen - 1)
    {
        dst[destlen + j] = src[j];
        j++;
    }

    dst[destlen + j] = 0;

    return destlen + srclen;
}