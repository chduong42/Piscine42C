/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:03:21 by chduong           #+#    #+#             */
/*   Updated: 2021/02/14 13:57:46 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{	
	printf("ft_strncmp = %d\n", ft_strncmp("ABCZ", "ABD", 4));
	printf("strncmp = %d\n", strncmp("ABCZ", "ABD", 4));

	return (0);
}
