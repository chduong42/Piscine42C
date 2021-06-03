/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:47:36 by chduong           #+#    #+#             */
/*   Updated: 2021/02/25 12:38:09 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		len_nb(char *str, char *base)
{
	int i;
	int len;

	len = 0;
	while (*str)
	{
		i = 0;
		while (base[i])
		{
			if (*str == base[i++])
			{
				++len;
				break ;
			}
		}
		++str;
	}
	return (len);
}

int		checkbase(char *base)
{
	int i;
	int j;

	if (base[0] == 0 || base[1] == 0)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] < 33 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j++])
				return (0);
		}
		++i;
	}
	return (i);
}

char	*checksign(char *str, int *sign)
{
	*sign = 1;
	while ((*str > 0 && *str < '!') || *str > 126)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign *= -1;
		++str;
	}
	return (str);
}

int		conv(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		++i;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int			i;
	int			sign;
	long int	nb;
	int			sizeb;

	nb = 0;
	sizeb = checkbase(base);
	str = checksign(str, &sign);
	i = len_nb(str, base);
	while (i-- > 0)
	{
		if (sizeb)
			nb = nb * sizeb + conv(*str, base);
		++str;
	}
	return (sign * nb);
}
