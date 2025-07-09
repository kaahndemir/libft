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

static	size_t	ft_separatorskip(char const *s, size_t i, char c)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static	size_t	ft_countitems(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		i = ft_separatorskip(s, i, c);
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
	}
	return (count);
}

static	void	ft_freeeverything(char **a, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(a[i]);
		i++;
	}
	free(a);
}

static char	**ft_onlysplit(char const *s, char c, char **a, size_t wordcount)
{
	size_t	i;
	size_t	j;
	size_t	word_start;

	i = 0;
	j = 0;
	while (j < wordcount)
	{
		i = ft_separatorskip(s, i, c);
		word_start = i;
		while (s[i] && s[i] != c)
			i++;
		a[j] = ft_substr(s, word_start, i - word_start);
		if (a[j] == NULL)
		{
			ft_freeeverything(a, j);
			return (NULL);
		}
		j++;
	}
	a[j] = NULL;
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	size_t	wordcount;

	if (!s)
		return (NULL);
	wordcount = ft_countitems(s, c);
	a = (char **)malloc((wordcount + 1) * sizeof(char *));
	if (a == NULL)
		return (NULL);
	a = ft_onlysplit(s, c, a, wordcount);
	return (a);
}
