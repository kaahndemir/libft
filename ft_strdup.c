/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:52:45 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/05 19:53:40 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1len;
	char	*string;

	s1len = ft_strlen(s1);
	string = malloc(sizeof(char) * (s1len + 1));
	if (string == NULL)
		return (NULL);
	ft_strlcpy(string, s1, s1len + 1);
	return (string);
}
