/**
 * @file ft_striteri.c
 * @author Kaan Demir
 * @brief Implementation of ft_striteri
 * @version 0.1
 * @date 2025-07-01
 *
 * @details  Applies the function 'f' to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to 'f' so it can be modified if necessary. 
 *
 * @param s: The string to iterate over. f: The function to apply to each character. 
 * @return None 
 *
 * @note Part: Part 2: Additional Functions
 * @note Category: Medium (More Complex Logic)
 * @note Allowed functions: None
 */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i = 0;
    while(s[i])
    {
        f(i, (s + i));
        i++;
    }
}
