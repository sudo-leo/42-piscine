/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 11:15:47 by larmelli          #+#    #+#             */
/*   Updated: 2020/11/08 11:50:24 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void				put_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void				put_number(int number)
{
	if (number > 9)
		put_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

void				ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		put_string(par[i].str);
		put_string("\n");
		put_number(par[i].size);
		put_string("\n");
		put_string(par[i].copy);
		put_string("\n");
		i++;
	}
}
