/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:53:53 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/05 19:53:58 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_justjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	totallen;
	char	*a;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	totallen = s1len + s2len;
	a = malloc(totallen + 1);
	if (a == NULL)
		return (NULL);
	ft_memcpy(a, s1, s1len);
	ft_memcpy((a + s1len), s2, s2len);
	a[s1len + s2len] = 0;
	return (a);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_justjoin((char const *){""}, s2));
	if (s2 == NULL)
		return (ft_justjoin(s1, (char const *){""}));
	return (ft_justjoin(s1, s2));
}
