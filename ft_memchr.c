/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imokoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:04:57 by imokoka           #+#    #+#             */
/*   Updated: 2019/06/25 10:02:39 by imokoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	x;
	unsigned char	*y;

	i = 0;
	x = (unsigned char)c;
	y = (unsigned char *)s;
	while ((size_t)i < n)
	{
		if (y[i] == x)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
