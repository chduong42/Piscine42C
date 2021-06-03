/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:08:28 by chduong           #+#    #+#             */
/*   Updated: 2021/02/11 12:26:13 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s", ft_strcapitalize(argv[1]));
	}
    return 0;
}
