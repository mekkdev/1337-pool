/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:17:15 by himekkao          #+#    #+#             */
/*   Updated: 2026/08/05 15:26:45 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

int	get_counter(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	counter;

	counter = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		if (i < size - 1)
			counter += j + ft_strlen(sep);
		else
			counter += j;
		i++;
	}
	return (counter);
}

char	*empty_string(void)
{
	char	*new;

	new = malloc(sizeof(char));
	if (!new)
		return (0);
	new[0] = '\0';
	return (new);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		i;
	int		counter;

	if (size == 0)
		return (empty_string());
	counter = get_counter(size, strs, sep);
	new = malloc((counter + 1) * sizeof(char));
	if (!new)
		return (0);
	new[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(new, strs[i]);
		if (i < size - 1)
			ft_strcat(new, sep);
		i++;
	}
	return (new);
}
