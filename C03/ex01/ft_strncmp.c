/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:05:29 by chduong           #+#    #+#             */
/*   Updated: 2021/02/14 13:55:31 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				cmp;

	i = 0;
	if (n == 0)
		return (0);
	while (i++ < n - 1 && *s1 && *s2 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	cmp = *s1 - *s2;
	if (cmp > 0)
		return (1);
	else if (cmp < 0)
		return (-1);
	else
		return (0);
}
