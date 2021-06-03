/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:02:49 by chduong           #+#    #+#             */
/*   Updated: 2021/02/16 08:59:29 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		checkbase(char *base)
{
	int i;
	int j;

	if (base[0] == 0 || base[1] == 0)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] < 33 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j] > 0)
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			size_base;
	char		conv[32];
	long int	nb;
	int			i;

	nb = nbr;
	i = 0;
	size_base = checkbase(base);
	if (size_base)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (nb / size_base)
		{
			conv[i++] = base[nb % size_base];
			nb /= size_base;
		}
		conv[i] = base[nb % size_base];
		while (i >= 0)
			ft_putchar(conv[i--]);
	}
}
