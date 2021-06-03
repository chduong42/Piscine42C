/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:09:46 by chduong           #+#    #+#             */
/*   Updated: 2021/02/25 15:06:41 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int					main(int argc, char **argv)
{
	if (argc > 1)
		ft_show_tab(ft_strs_to_tab(argc - 1, argv + 1));
	return (0);
}
