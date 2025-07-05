/**
 * @file ft_calloc.c
 * @author Kaan Demir
 * @brief Implementation of ft_calloc
 * @note Recreates the behavior of calloc()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() returns a unique pointer value that can later be successfully passed to free(). If the multiplication of nmemb and size would result in integer overflow, then calloc() returns an error. By contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated: malloc(nmemb * size);
 *
 * @param count The number of elements to be allocated.
 * @param size The size of each element.
 * @return The malloc(), calloc(), realloc(), and reallocarray() functions return a pointer to the allocated memory, which is suitably aligned for any type that fits into the requested size or less. On error, these func‐ tions return NULL and set errno. Attempting to allocate more than PTRDIFF_MAX bytes is considered an er‐ ror, as an object that large could cause later pointer subtraction to overflow. The free() function returns no value, and preserves errno. The realloc() and reallocarray() functions return NULL if ptr is not NULL and the requested size is zero; this is not considered an error. (See "Non‐ portable behavior" for portability issues.) Otherwise, the re‐ turned pointer may be the same as ptr if the allocation was not moved (e.g., there was room to expand the allocation in-place), or different from ptr if the allocation was moved to a new address. If these func‐ tions fail, the original block is left untouched; it is not freed or moved.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Hard (Memory Allocation)
 */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    if(size != 0 && count != 0 && count > 4294967296 / size)
        return NULL;

    void *a = malloc(count * size);

    if(a == NULL)
        return NULL;

    ft_bzero(a, count * size);

    return a; 
}