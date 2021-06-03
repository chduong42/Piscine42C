/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 09:35:17 by chduong           #+#    #+#             */
/*   Updated: 2021/02/13 12:10:22 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(int argc, char **argv)
{
	char *src = "bonjour";
	char dest[50] = "Bebe ";

	if (argc == 3)
	{
		printf("Before : %s + %s\n",argv[1] , argv[2]);
		//printf("After ft_strncat : %s\n", ft_strncat(argv[1], argv[2], 3));
		printf("After strncat: %s\n", strncat(dest, src, 3));
	}
	else
		printf("\n");
	return (0);
}

