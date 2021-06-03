/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:18:51 by chduong           #+#    #+#             */
/*   Updated: 2021/02/14 11:15:08 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char *src = "pouic";
	char dest[20] = "pouic ";
	char dest2[20] = "pouic ";

	printf("%s+%s\n", dest, src);
	printf("strlcat %lu\tdest : %s\n", strlcat(dest, src, 20), dest);
	printf("ft_strlcat %d\tdest : %s\n", ft_strlcat(dest2, src, 20), dest2);
	return (0);
}
