/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:03:01 by larmelli          #+#    #+#             */
/*   Updated: 2020/10/29 13:44:35 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		size1;
	int		size2;
	int		index;

	index = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	while (s1[index] && s2[index])
	{
		if (s1[index] < s2[index])
			return (-1);
		else if (s1[index] > s2[index])
			return (1);
		else
			index++;
	}
	if (size1 > size2)
		return (1);
	else if (size1 == size2)
		return (0);
	else
		return (-1);
}
