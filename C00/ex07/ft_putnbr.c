/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:42:44 by chduong           #+#    #+#             */
/*   Updated: 2021/02/07 15:37:02 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_unsign(int nb)
{
	ft_putchar('-');
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	else
		nb = -nb;
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	cint[11];
	int		i;

	i = 0;
	if (nb < 0)
	{
		nb = ft_unsign(nb);
	}
	while (nb >= 10)
	{
		cint[i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	if (nb < 10)
		cint[i] = nb + 48;
	while (i >= 0)
	{
		ft_putchar(cint[i--]);
	}
}
