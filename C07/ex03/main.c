/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:18:16 by chduong           #+#    #+#             */
/*   Updated: 2021/02/24 15:55:03 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(int argc, char **argv)
{
	char *str;

	str = ft_strjoin(argc - 1, argv + 1, "+");
	printf("%s\n", str);
	free(str);
	return (0);
}
