/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:04:56 by chduong           #+#    #+#             */
/*   Updated: 2021/02/10 16:34:07 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[18];
    int r;

    r = ft_strlcpy(buffer,string,size);
    printf("Avant '%s'\nApres '%s'\nTaille de la source: %d\n\n", string, buffer, r);
}

int main()
{
    test(29);
    test(10);
    test(1);
    test(0);

    return(0);
}
