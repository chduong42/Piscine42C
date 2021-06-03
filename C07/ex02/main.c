/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 09:38:55 by chduong           #+#    #+#             */
/*   Updated: 2021/02/23 11:34:24 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int	i;
	int *tab[2];

	i = 0;
	printf("taille de range : %d\n", ft_ultimate_range(tab, 5, 10));
	while (i < 5)
		printf("%d ", tab[0][i++]);
	return (0);
}
