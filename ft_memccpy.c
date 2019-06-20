/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imokoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:20:54 by imokoka           #+#    #+#             */
/*   Updated: 2019/06/07 12:00:28 by imokoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int					i;
	unsigned char		*dest;
	unsigned const char	*srcs;

	i = 0;
	dest = (unsigned char *)dst;
	srcs = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while ((size_t)i < n)
	{
		if (srcs[i] == (unsigned char)c)
		{
			dest[i] = srcs[i];
			return ((char*)dst + (i + 1));
		}
		dest[i] = srcs[i];
		i++;
	}
	return (NULL);
}
