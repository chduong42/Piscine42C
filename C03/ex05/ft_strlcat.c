/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:46:15 by chduong           #+#    #+#             */
/*   Updated: 2021/02/14 11:07:59 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	len = ft_strlen(dest) + ft_strlen(src);
	i = 0;
	if (size > ft_strlen(dest))
	{
		while (dest[i])
			++i;
		while (*src && i < size - 1)
		{
			dest[i++] = *src;
			src++;
		}
		dest[i] = '\0';
		return (len);
	}
	else
		return (size + ft_strlen(src));
}
