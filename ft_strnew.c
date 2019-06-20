/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imokoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 09:04:56 by imokoka           #+#    #+#             */
/*   Updated: 2019/06/18 09:06:49 by imokoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char*)malloc((sizeof(char) * size) + 1);
	if (!str)
		return (NULL);
	else
	{
		ft_memset(str, '\0', size + 1);
	}
	return (str);
}
