/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:44:12 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/05 22:00:19 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int	digits;

	digits = 0;
	while (n > 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

char	*onlyitoa(char *a, int total, int n, int sign)
{
	int	i;

	if (a == NULL)
		return (NULL);
	i = 0;
	while (total > i)
	{
		a[total - i - 1] = n % 10 + 48;
		n /= 10;
		i++;
	}
	if (sign == -1)
		a[0] = '-';
	a[total] = 0;
	return (a);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		total;
	char	*a;

	sign = 1;
	total = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		total += ft_digits(-n) + 1;
		sign = -1;
		n = -n;
	}
	else
	{
		total += ft_digits(n);
	}
	a = malloc(total + 1);
	return (onlyitoa(a, total, n, sign));
}
