/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:13:03 by chduong           #+#    #+#             */
/*   Updated: 2021/02/20 12:08:08 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb == 2)
		return (1);
	else if (nb < 2 || nb % 2 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb > 2)
	{
		if (ft_is_prime(nb))
			return (nb);
		if (nb % 2 == 0)
			++nb;
		else
			nb += 2;
	}
	return (2);
}
