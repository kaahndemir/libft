/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:36:06 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/08 17:29:19 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	if (size != 0 && count != 0 && count > (size_t) -1 / size)
		return (NULL);
	a = malloc(count * size);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, count * size);
	return (a);
}
