/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:03:21 by chduong           #+#    #+#             */
/*   Updated: 2021/02/11 10:04:20 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("ft_strcmp = %d\n", ft_strcmp("ABZ", "AC"));
	printf("ft_strcmp = %d\n", ft_strcmp("AB", "AB"));
	printf("ft_strcmp = %d\n", ft_strcmp("Bonjour", "Bon"));
	printf("ft_strcmp = %d\n", ft_strcmp("Bonjour", "Bonjour !"));
	printf("strcmp = %d\n", strcmp("ABZ", "AC"));
	printf("strcmp = %d\n", strcmp("AB", "AB"));
	printf("strcmp = %d\n", strcmp("Bonjour", "Bon"));
	printf("strcmp = %d\n", strcmp("Bonjour", "Bonjour !"));
	return (0);
}
