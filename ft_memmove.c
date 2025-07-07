/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:48:07 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/06 18:41:25 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_onlymemmove(char *a, char *b, size_t len)
{
	size_t	i;
	size_t	j;

	j = len - 1;
	i = 0;
	if (b <= a)
	{
		while (i < len)
		{
			b[i] = a[i];
			i++;
		}
	}
	else
	{
		while ((int)j >= 0)
		{
			b[j] = a[j];
			j--;
		}
	}
	return (b);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	if (!dst && !src)
		return (dst);
	a = (char *)src;
	b = (char *)dst;
	return (ft_onlymemmove(a, b, len));
}
