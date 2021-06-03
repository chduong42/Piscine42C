/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 08:55:12 by chduong           #+#    #+#             */
/*   Updated: 2021/02/10 09:05:04 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
    char str[] = "Bonjour 13";

    printf("0 autre que lettre, 1 que des lettre ou vide : %d\n", ft_str_is_alpha(str));
    return 0;
}

