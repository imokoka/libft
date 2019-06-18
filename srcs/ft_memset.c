/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imokoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:37:36 by imokoka           #+#    #+#             */
/*   Updated: 2019/06/18 08:40:18 by imokoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*temp_b;

	i = 0;
	temp_b = (char *)b;
	while ((size_t)i < len)
	{
		temp_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
