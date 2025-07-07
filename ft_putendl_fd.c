/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogudemir <ogudemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:51:18 by ogudemir          #+#    #+#             */
/*   Updated: 2025/07/05 19:51:25 by ogudemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	strlen;

	if (s == NULL || *s == 0)
	{
		write(fd, "\n", 1);
		return ;
	}
	strlen = ft_strlen(s);
	write(fd, &*s, strlen);
	write(fd, "\n", 1);
}
