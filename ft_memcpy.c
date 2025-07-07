/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:48:01 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/06 18:40:29 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;
	size_t				i;

	if (!dst && !src)
		return (dst);
	if (dst == src)
		return (dst);
	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	i = 0;
	while (n > i)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
