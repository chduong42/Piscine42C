/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:59:04 by chduong           #+#    #+#             */
/*   Updated: 2021/02/24 09:23:52 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		checkbase(char *base);

int		len_itoa(int nb, int size_base)
{
	int len;

	len = 1;
	while (nb / size_base)
	{
		nb /= size_base;
		++len;
	}
	return (len);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int			len_base;
	int			len_nb;
	long int	nb;
	char		*str;
	int			sign;

	sign = nbr < 0 ? 1 : 0;
	nb = nbr < 0 ? -nbr : nbr;
	len_base = checkbase(base);
	len_nb = len_itoa(nb, len_base) + sign;
	str = malloc(sizeof(*str) * (len_nb + 1));
	str[len_nb] = '\0';
	while (--len_nb >= 0)
	{
		str[len_nb] = base[nb % len_base];
		nb /= len_base;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (checkbase(base_from) == 0 || checkbase(base_to) == 0)
		return (NULL);
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}
