/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:46:06 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/05 12:46:07 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_itoa.c
 * @author Kaan Demir
 * @brief Implementation of ft_itoa
 * @version 0.1
 * @date 2025-07-01
 *
 * @details  Allocates memory (using malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled. 
 *
 * @param n: The integer to convert. 
 * @return The string representing the integer. NULL if the allocation fails. 
 *
 * @note Part: Part 2: Additional Functions
 * @note Category: Hard (Complex Allocation and Logic)
 * @note Allowed functions: malloc
 */

#include "libft.h"

static int ft_digits(int n)
{
    int digits = 0;

    while (n > 0)
    {
        digits++;
        n /= 10;
    }
    return digits;
}

char *ft_itoa(int n)
{
    int sign = 1;
    int total = 0;

    if(n == 0)
        return ft_strdup("0");

    if(n == -2147483648)
        return ft_strdup("-2147483648");
    
    if(n < 0)
    {
        total += ft_digits(-n) + 1;
        sign = -1;
        n = -n;
    }
    else
    {
        total += ft_digits(n);
    }
    
    // calculate digits
    char *a = malloc(total + 1);
    if(a == NULL)
        return NULL;

    int i = 0;

    while(total > i)
    {
        a[total - i - 1] = n % 10 + 48;
        n /= 10;
        i++;
    }

    if(sign == - 1)
        a[0] = '-';

    a[total] = 0;

    return a;
}
