/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imokoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:14:44 by imokoka           #+#    #+#             */
/*   Updated: 2019/05/24 11:21:55 by imokoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	len++;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
