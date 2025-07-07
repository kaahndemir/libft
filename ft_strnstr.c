/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:58:29 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/05 19:59:43 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	stackp;
	size_t	needlp;

	stackp = 0;
	needlp = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[stackp] && len > stackp)
	{
		while (haystack[stackp + needlp] == needle[needlp] && len > stackp
			+ needlp)
		{
			if (needle[needlp + 1] == '\0')
				return (&((char *)haystack)[stackp]);
			needlp++;
		}
		stackp++;
		needlp = 0;
	}
	return (NULL);
}
