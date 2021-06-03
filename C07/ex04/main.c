/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 09:24:01 by chduong           #+#    #+#             */
/*   Updated: 2021/02/25 11:24:42 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("atoi : %d\n", ft_atoi_base(argv[1],argv[2]));
		printf("itoa : %s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	}
	else
		printf("Erreur >> Entrez un nombre et deux base.");
	return (0);
}
