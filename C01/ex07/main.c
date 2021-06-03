/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:30:44 by chduong           #+#    #+#             */
/*   Updated: 2021/02/09 08:29:11 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int size;
	int i;
	int str[] = {1, 2, 3, 4, 5, 6};

	size = 6;
	i = 0;
	while (i < size)
	{
		printf("%d ", str[i]);
		i++;
	}
	ft_rev_int_tab(str, size);
	
	printf("\n");

	i = 0;
	while (i < size)
	{
		printf("%d ", str[i]);
		i++;
	}
	return (0);
}
