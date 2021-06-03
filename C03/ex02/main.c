/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 08:59:00 by chduong           #+#    #+#             */
/*   Updated: 2021/02/13 08:59:17 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Before : %s + %s\n",argv[1] , argv[2]);
		printf("After : %s\n", ft_strcat(argv[1],argv[2]));
	}
	else
		printf("\n");
	return (0);
}
