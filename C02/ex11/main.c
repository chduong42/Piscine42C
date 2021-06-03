/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:06:34 by chduong           #+#    #+#             */
/*   Updated: 2021/02/11 12:35:00 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char tab[256];
	int i = 0;
	while (i < 256)
	{
		tab[i] = i;
		i++;
	}
	ft_putstr_non_printable(tab);
	return (0);
}
