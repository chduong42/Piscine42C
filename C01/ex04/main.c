/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:12:49 by chduong           #+#    #+#             */
/*   Updated: 2021/02/08 14:13:16 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 169;
	b = 10;
	printf(" a = %d b =  %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("resultat stocke dans a = %d et le reste dans b = %d\n", a, b);
	return (0);
}
