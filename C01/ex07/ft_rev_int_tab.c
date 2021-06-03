/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:42:40 by chduong           #+#    #+#             */
/*   Updated: 2021/02/09 08:28:20 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int debut;
	int fin;
	int stock;

	debut = 0;
	fin = size - 1;
	while (debut < fin && debut != fin)
	{
		stock = tab[fin];
		tab[fin] = tab[debut];
		tab[debut] = stock;
		debut++;
		fin--;
	}
}
