/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:13:56 by chduong           #+#    #+#             */
/*   Updated: 2021/02/25 15:07:37 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	char		c[10];
	int			i;

	i = 0;
	while (nb >= 10)
	{
		c[i++] = nb % 10 + 48;
		nb = nb / 10;
	}
	if (nb < 10)
		c[i] = nb + 48;
	while (i >= 0)
		ft_putchar(c[i--]);
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		++i;
	}
}
