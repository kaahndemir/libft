/**
 * @file ft_putchar_fd.c
 * @author Kaan Demir
 * @brief Implementation of ft_putchar_fd
 * @version 0.1
 * @date 2025-07-01
 *
 * @details  Outputs the character 'c' to the specified file descriptor. 
 *
 * @param c: The character to output. fd: The file descriptor on which to write. 
 * @return None 
 *
 * @note Part: Part 2: Additional Functions
 * @note Category: Easy (File Descriptor I/O)
 * @note Allowed functions: write
 */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd,&c, sizeof(c));
}
