/**
 * @file ft_putnbr_fd.c
 * @author Kaan Demir
 * @brief Implementation of ft_putnbr_fd
 * @version 0.1
 * @date 2025-07-01
 *
 * @details  Outputs the integer 'n' to the specified file descriptor. 
 *
 * @param n: The integer to output. fd: The file descriptor on which to write. 
 * @return None 
 *
 * @note Part: Part 2: Additional Functions
 * @note Category: Medium (More Complex Logic)
 * @note Allowed functions: write
 */

#include "libft.h"


void ft_putnbr_fd(int n, int fd)
{

    if(n == -2147483648)
    {
        write(fd, "-2", 2);
        n = 14748364;
    }

    if(n < 0)
    {
        n = n * -1;
        write(fd, "-", 1);
    }
        
    // iterate recursively
    if(n > 9)
        ft_putnbr_fd(n / 10, fd);

    n = n % 10;
    write(fd, &(char){n + 48}, 1);
}
