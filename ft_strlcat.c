/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:39:56 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/06 16:00:48 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	j;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = 0;
	if (destlen >= dstsize)
		return (dstsize + srclen);
	while (src[j] && j < dstsize - destlen - 1)
	{
		dst[destlen + j] = src[j];
		j++;
	}
	dst[destlen + j] = 0;
	return (destlen + srclen);
}
