/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 17:05:03 by chduong           #+#    #+#             */
/*   Updated: 2021/02/09 08:32:35 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int size;
	int i;
	int str[] = {3, 2, 1, 5, 4, 0, 6, 7, 100, 99, 11, 17, 12, 16, 14, 20, 13 ,17};

	size = 18;
	i = 0;
	while (i < size)
	{
		printf("%d ", str[i]);
		i++;
	}
	ft_sort_int_tab(str, size);

	printf("\n");

	i = 0;
	while (i < size)
	{
		printf("%d ", str[i]);
		i++;
	}
	return (0);
}
