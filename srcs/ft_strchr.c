/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imokoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:28:18 by imokoka           #+#    #+#             */
/*   Updated: 2019/06/05 09:46:54 by imokoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if ((char)c == '\0')
		return ((char*)s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
		i++;
	}
	return (NULL);
}
