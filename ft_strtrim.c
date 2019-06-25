/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imokoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 09:55:38 by imokoka           #+#    #+#             */
/*   Updated: 2019/06/25 09:58:46 by imokoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	int		size;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t' || s[len] == '\0')
		len--;
	if (len > 0)
		size = (len - i) + 1;
	else
		size = 0;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memcpy(str, s + i, (size_t)size);
	str[size] = '\0';
	return (str);
}
