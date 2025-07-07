/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 20:00:28 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/05 20:03:14 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char a, char const *set)
{
	int	inset;
	int	i;

	inset = 0;
	i = 0;
	while (set[i])
	{
		if (a == set[i])
			inset = 1;
		i++;
	}
	return (inset);
}

static int	ft_getstart(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!ft_isinset(s1[i], set))
			return (i);
		i++;
	}
	return (i);
}

static int	ft_getend(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0 && s1[i])
	{
		if (!ft_isinset(s1[i], set))
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*a;

	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start > end)
		return (ft_strdup(""));
	len = end - start + 1;
	a = ft_substr(s1, start, len);
	if (a == NULL)
		return (NULL);
	return (a);
}
