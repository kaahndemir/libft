/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:58:29 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/10 20:32:41 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	stackp;
	size_t	needlp;

	stackp = 0;
	needlp = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[stackp] && len > stackp)
	{
		while (big[stackp + needlp] == little[needlp] && len > stackp + needlp)
		{
			if (little[needlp + 1] == '\0')
				return (&((char *)big)[stackp]);
			needlp++;
		}
		stackp++;
		needlp = 0;
	}
	return (NULL);
}
