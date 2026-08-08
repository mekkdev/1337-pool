/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:02:27 by himekkao          #+#    #+#             */
/*   Updated: 2026/07/27 15:25:30 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_n_cmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;	

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len_find;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (to_find[i])
		i++;
	len_find = i;
	i = 0;
	while (str[i])
	{
		if (str_n_cmp(&str[i], to_find, len_find) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
