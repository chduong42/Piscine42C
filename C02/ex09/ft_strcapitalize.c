/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:54:48 by chduong           #+#    #+#             */
/*   Updated: 2021/02/11 14:05:32 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (3);
	else
		return (0);
}

char	ft_upcase(char c)
{
	if (c < 123 && c > 96)
		c = c - 32;
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int new;

	i = 0;
	new = 1;
	*str = *ft_strlowcase(str);
	while (str[i])
	{
		if (ft_is_alphanum(str[i]) == 1 && new == 1)
		{
			str[i] = ft_upcase(str[i]);
			new = 0;
		}
		else if (ft_is_alphanum(str[i]) == 3 && new == 1)
			new = 0;
		else if (ft_is_alphanum(str[i]) == 0)
			new = 1;
		i++;
	}
	return (str);
}
