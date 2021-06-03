/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:23:10 by chduong           #+#    #+#             */
/*   Updated: 2021/02/11 12:34:37 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	unsigned char h[2];

	ft_putchar('\\');
	h[0] = c / 16;
	h[1] = c % 16;
	if (h[0] < 10)
		ft_putchar(h[0] + '0');
	else
		ft_putchar(h[0] + 87);
	if (h[1] < 10)
		ft_putchar(h[1] + '0');
	else
		ft_putchar(h[1] + 87);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			ft_puthex((unsigned char)str[i]);
		else
			ft_putchar((unsigned char)str[i]);
		i++;
	}
}
