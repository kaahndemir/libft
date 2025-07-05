/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:22:11 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/03 21:51:01 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_atoi.c
 * @author Kaan Demir
 * @brief Implementation of ft_atoi
 * @note Recreates the behavior of atoi()
 * @version 0.1
 * @date 2025-07-01
 *
 * @details The atoi() function converts the initial portion of the string pointed to by nptr to int. The behavior is the same as strtol(nptr, NULL, 10); except that atoi() does not detect errors. The atol() and atoll() functions behave the same as atoi(), except that they convert the initial portion of the string to their return type of long or long long.
 *
 * @return The converted value or 0 on error.
 *
 * @note Part: Part 1: Libc Functions
 * @note Category: Medium Difficulty (Pointer-intensive Functions)
 */

#include "libft.h"

// "-46513"

int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;

    while(ft_isspace(*str))
        str++;

    if(ft_issign(*str))
    {
        if(*str == '-')
            sign = -1;
        str++;
    }
    
    while(ft_isdigit((int)*str))
    {
        result = result * 10 + *str - 48;
        str++;
    }

    result = result * sign;

    return result;
}

static int ft_issign(char a)
{
    if(a == '-' || a == '+')
        return 1;

    return 0;
}

static int ft_isspace(char a)
{

    char *spaces = "\f\n\r\t\v ";

    while(*spaces)
    {
        if(*spaces == a)
            return 1;
        spaces++;
    }
    return 0;
}