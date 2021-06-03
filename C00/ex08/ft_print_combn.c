/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:37:56 by chduong           #+#    #+#             */
/*   Updated: 2021/02/07 17:11:09 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int comb[n];
	int i;

	if (0 < n < 10)
	{
		i = 0;
		comb[i] = 0;
		while (i < n)
		{
			comb[i + 1] = comb[i] + 1;
		}
	}
}
