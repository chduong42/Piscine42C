/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 08:57:39 by chduong           #+#    #+#             */
/*   Updated: 2021/02/10 09:06:32 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
    char str[] = "123";
    printf("0 autres, 1 que des chiffres ou vide : %d\n", ft_str_is_numeric(str));
    return 0;
}

