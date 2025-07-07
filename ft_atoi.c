/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:22:11 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/05 19:31:30 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_issign(char a)
{
	if (a == '-' || a == '+')
		return (1);
	return (0);
}

static int	ft_isspace(char a)
{
	char	*spaces;

	spaces = "\f\n\r\t\v ";
	while (*spaces)
	{
		if (*spaces == a)
			return (1);
		spaces++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (ft_issign(*str))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit((int)*str))
	{
		result = result * 10 + *str - 48;
		str++;
	}
	result = result * sign;
	return (result);
}
