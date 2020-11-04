/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:08:16 by larmelli          #+#    #+#             */
/*   Updated: 2020/10/29 14:30:28 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compare(char *x, char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
		{
			return (0);
		}
		x++;
		y++;
	}
	return (*y == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*str == *to_find && ft_compare(str, to_find))
			return (str);
		str++;
	}
	return (0);
}
