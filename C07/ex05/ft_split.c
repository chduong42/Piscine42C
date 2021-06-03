/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 09:25:57 by chduong           #+#    #+#             */
/*   Updated: 2021/02/25 16:15:06 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_split(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

int		count_split(char *str, char *charset)
{
	int count;

	count = 1;
	if (*charset == 0 || charset == NULL)
		return (1);
	while (*str && is_split(*str, charset))
		++str;
	while (*str)
	{
		if (is_split(*str, charset) && !is_split(*(str + 1), charset)
				&& *(str + 1) != 0)
			++count;
		++str;
	}
	return (count);
}

int		len_str(char *str, char *charset)
{
	int i;

	i = 0;
	while (*str && is_split(*str, charset))
		++str;
	while (*str && !is_split(*str, charset))
	{
		++i;
		++str;
	}
	return (i > 0 ? i + 1 : 0);
}

char	*paste_cut(char *strin, char *strout, char *charset)
{
	while (*strin && is_split(*strin, charset))
		++strin;
	while (*strin && !is_split(*strin, charset))
	{
		*strout = *strin;
		++strout;
		++strin;
	}
	*strout = 0;
	while (is_split(*strin, charset))
		++strin;
	return (strin);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		split;
	int		len;
	int		i;

	i = 0;
	split = count_split(str, charset);
	if (!(tab = malloc(sizeof(*tab) * (split + 1))))
		return (NULL);
	else
	{
		while (i < split)
		{
			len = len_str(str, charset);
			if(!(tab[i] = malloc(sizeof(**tab) * len)))
				return (NULL);
			if (len == 0 || *str == 0 || str == NULL)
				tab[i] = NULL;
			else
				str = paste_cut(str, tab[i], charset);
			++i;
		}
		tab[i] = NULL;
	}
	return (tab);
}
