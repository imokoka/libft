/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imokoka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:29:41 by imokoka           #+#    #+#             */
/*   Updated: 2019/05/23 11:36:35 by imokoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBTF_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(int *a, int *b);
int		ft_tolower(int ch);
int		ft_toupper(int ch);

#endif
