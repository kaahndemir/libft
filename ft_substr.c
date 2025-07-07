/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 20:03:21 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/06 21:57:44 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_createsubstr(char const *s, size_t finallen, size_t start)
{
	char	*new;
	size_t	i;

	new = (char *)malloc(finallen * sizeof(char) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < finallen && s[start + i])
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = 0;
	return (new);
}

// "libft" 4 1

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;

	if (s == NULL)
		return (NULL);
	slen = (size_t)ft_strlen(s); // 5
	if (start >= slen)
	{
		return ft_strdup("");
	}
	if (len > slen - start)
		len = slen - start;
	return (ft_createsubstr(s, len, start));
}
