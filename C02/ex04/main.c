/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:08:47 by chduong           #+#    #+#             */
/*   Updated: 2021/02/10 09:10:52 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
    char str[] = "onjour";

    printf("1 que minuscule ou vide, 0 autres : %d\n", ft_str_is_lowercase(str));
    return 0;
}

