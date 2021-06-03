/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:46:05 by chduong           #+#    #+#             */
/*   Updated: 2021/02/10 09:51:10 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main()
{
    char str[] = "BoNjOuR !";

    printf("init = %s\n", str);
    printf("lowcase = %s\n", ft_strlowcase(str));
    return 0;
}
