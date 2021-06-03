/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 08:35:28 by chduong           #+#    #+#             */
/*   Updated: 2021/02/17 11:54:10 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		ft_strcmp(char *a, char *b)
{
	while (*a == *b)
	{
		++a;
		++b;
	}
	return (*a - *b);
}

void	ft_sort(int argc, char **argv)
{
	char	*swap;
	char	a;
	int		i;
	int		j;

	swap = &a;
	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[j];
				argv[j] = swap;
			}
			++j;
		}
		++i;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc >= 2)
	{
		ft_sort(argc, argv);
		while (argv[i])
			ft_putstr(argv[i++]);
	}
	return (0);
}
