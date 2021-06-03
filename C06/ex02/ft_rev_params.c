/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 08:20:58 by chduong           #+#    #+#             */
/*   Updated: 2021/02/17 11:43:08 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc >= 2)
	{
		i = argc - 1;
		while (i > 0)
			ft_putstr(argv[i--]);
	}
	return (0);
}
