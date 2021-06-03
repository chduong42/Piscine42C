/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:08:47 by chduong           #+#    #+#             */
/*   Updated: 2021/02/10 09:38:37 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main()
{
    char str[] = "Bonjour !\n";

    printf("init = %s\n", str);
    printf("upcase = %s\n", ft_strupcase(str));
    return 0;
}
