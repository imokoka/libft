/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imokoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:41:31 by imokoka           #+#    #+#             */
/*   Updated: 2019/06/06 13:53:41 by imokoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] == '\0' && (size_t)i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while ((size_t)i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
