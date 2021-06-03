/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:46:41 by chduong           #+#    #+#             */
/*   Updated: 2021/02/26 07:38:47 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);
char	**ft_strsplit(const char *s, char *c);

int		main(void)
{
	char	**tab;
	char	**to_free;
	int		i;

	//tab = ft_split(NULL, NULL);
//	tab = ft_split(NULL, "");
//	tab = ft_split(NULL, "abcdef");
	//tab = ft_split("", "yo");
//	tab = ft_split("   ", NULL);
//	tab = ft_split("abcdef", NULL);
//	tab = ft_split("coucou", "");
//	tab = ft_split("coucou", "o");
//	tab = ft_split("aaaa", "a");
//	tab = ft_split("aabbccdd", "ac");
//	tab = ft_split("et si je fais une chaine un peu longue ca tient toujours ?", " ");
//	tab = ft_split("salut", "salut");
//	tab = ft_split("", "");
	to_free = tab;
	i = 0;
	while (*tab)
	{
		printf("tab[%d] == \"%s\"\n", i, *tab);
		++i;
		++tab;
	}
	tab = to_free;
	while (*tab)
	{
		free(*tab);
		++tab;
	}
	free(to_free);

	return (0);
}
