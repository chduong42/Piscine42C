/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 08:40:37 by chduong           #+#    #+#             */
/*   Updated: 2021/02/24 15:58:16 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int		ft_ultlen(int size, char **strs, char *sep)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += (size - 1) * ft_strlen(sep);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*fstr;
	int		i;

	i = 0;
	if (size == 0)
	{
		fstr = malloc(sizeof(*fstr));
		*fstr = 0;
	}
	else if (!(fstr = malloc(sizeof(*fstr) * ft_ultlen(size, strs, sep))))
		return (NULL);
	*fstr = 0;
	while (i < size)
	{
		fstr = ft_strcat(fstr, strs[i]);
		if (i < size - 1)
			fstr = ft_strcat(fstr, sep);
		++i;
	}
	return (fstr);
}
