/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:53:05 by chduong           #+#    #+#             */
/*   Updated: 2021/02/08 12:54:38 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int resultat;
	int reste;

	ft_div_mod(58, 10, &resultat, &reste);
	printf("58 / 10 = %d reste %d\n", resultat, reste);
	return (0);
}
