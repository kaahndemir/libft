/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 20:31:17 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/05 20:31:28 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int a)
{
	return (a >= 65 && a <= 90);
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c = c + 32;
	return (c);
}
