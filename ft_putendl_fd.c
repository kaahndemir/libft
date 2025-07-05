/**
 * @file ft_putendl_fd.c
 * @author Kaan Demir
 * @brief Implementation of ft_putendl_fd
 * @version 0.1
 * @date 2025-07-01
 *
 * @details  Outputs the string 's' to the specified file descriptor followed by a newline. 
 *
 * @param s: The string to output. fd: The file descriptor on which to write. 
 * @return None 
 *
 * @note Part: Part 2: Additional Functions
 * @note Category: Easy (File Descriptor I/O)
 * @note Allowed functions: write
 */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if(s == NULL || *s == 0)
    {
        write(fd, "\n", 1);
        return ;
    }
    int strlen = ft_strlen(s);
    write(fd,&*s, strlen);
    write(fd, "\n", 1);
}
