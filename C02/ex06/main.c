/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:08:47 by chduong           #+#    #+#             */
/*   Updated: 2021/02/10 09:25:26 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
    char str[] = "Bonjour !\n";

    printf("1 que imprimable ou vide, 0 non imprimable : %d\n", ft_str_is_printable(str));
    return 0;
}

