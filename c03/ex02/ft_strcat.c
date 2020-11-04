/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:56:26 by larmelli          #+#    #+#             */
/*   Updated: 2020/10/29 14:15:08 by larmelli         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int index;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	index = 0;
	while (index < j && src[index] != '\0')
	{
		dest[i + index] = src[index];
		index++;
	}
	dest[i + index] = '\0';
	return (dest);
}
