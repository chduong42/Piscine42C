/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:21:38 by chduong           #+#    #+#             */
/*   Updated: 2021/02/08 12:22:40 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 42;
	b = 69;
	printf("adresse de a = %p\n", &a);
	printf("adresse de b = %p\n", &b);
	printf("valeur de a = %d\n", a);
	printf("valeur de b = %d\n", b);
	ft_swap(&a, &b);
	printf("adresse de a = %p\n", &a);
	printf("adresse de b = %p\n", &b);
	printf("valeur de a = %d\n", a);
	printf("valeur de b = %d\n", b);
	return (0);
}
