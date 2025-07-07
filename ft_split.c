/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudeir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:51:56 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/05 19:52:03 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_tothesep(char const *s, size_t i, char c)
{
	size_t	lastindex;

	lastindex = i;
	while (s[i] != c && s[i])
	{
		lastindex = i;
		i++;
	}
	return (lastindex);
}

size_t	ft_separatorskip(char const *s, size_t i, char c)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

size_t	ft_countitems(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		i = ft_separatorskip(s, i, c);
		if (s[i] != c)
		{
			count++;
			while (s[i]  && s[i] != c)
            {
		write(1, &s[i], 1);
				i++;
            }
		}
	}
	return (count);
}

void	ft_freeeverything(char **a, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(a[i]);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	size_t	i;
	size_t	j;
	size_t	wordend;
	size_t	wordcount;

	wordcount = ft_countitems(s, c);

	if(wordcount == 0)
		return NULL;

	a = (char **)malloc((wordcount + 1) * sizeof(char *));
	if (a == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		i = ft_separatorskip(s, i, c);
		wordend = ft_tothesep(s, i, c);
		a[j] = ft_substr(s, i, wordend - i + 1);
		if (a[j] == NULL)
		{
			ft_freeeverything(a, j);
			return (NULL);
		}
		i = wordend + 1;
		j++;
	}
	a[j] = NULL;
	return (a);
}
