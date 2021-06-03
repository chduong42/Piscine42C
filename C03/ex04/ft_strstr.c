/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 09:37:41 by chduong           #+#    #+#             */
/*   Updated: 2021/02/14 10:03:43 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_countmatch(char *str, char *to_find)
{
	int match;

	match = 0;
	while (*str && *to_find && *to_find == *str)
	{
		match++;
		to_find++;
		str++;
	}
	str -= match;
	to_find -= match;
	return (match);
}

char	*ft_strstr(char *str, char *to_find)
{
	int len;

	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	while (*str && ft_countmatch(str, to_find) < len)
		str++;
	if (ft_countmatch(str, to_find) == len)
		return (str);
	else
		return (0);
}
