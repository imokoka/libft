/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imokoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:55:53 by imokoka           #+#    #+#             */
/*   Updated: 2019/06/13 12:33:59 by imokoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	while (s1[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strcpy(str, s1);
	return (str);
}
