/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:43:36 by chduong           #+#    #+#             */
/*   Updated: 2021/02/14 09:31:24 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_strstr("jyejjiqby2gttqc58h2gxnwm", argv[1]));
		printf("%s\n", strstr("jyejjiqby2gttqc58h2gxnwm", argv[1]));
	}
	else
		printf("\n");
	return (0);
}
