/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:08:18 by himekkao          #+#    #+#             */
/*   Updated: 2026/08/05 19:05:56 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min < max)
	{
		len = max - min;
		*range = malloc(len * sizeof(int));
		if (!(*range))
			return (-1);
		i = 0;
		while (i < len)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (len);
	}
	else
	{
		*range = NULL;
		return (0);
	}
}
