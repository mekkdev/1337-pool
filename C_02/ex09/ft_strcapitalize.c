/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:58:04 by himekkao          #+#    #+#             */
/*   Updated: 2026/07/25 16:40:37 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_alpha(char *c)
{
	if (( *c >= 'a' && *c <= 'z')
		|| (*c >= 'A'&& *c <= 'Z'))
		return (1);
	else
		return (0);
}

void	lower_case(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

void	upper_case(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			lower_case(&str[i]);
		i++;
	}
	
	i = 0;
	if (check_alpha(&str[0]) == 1)
		upper_case(&str[0]);
	i = 1;
	while(str[i])
	{
		if (check_alpha(&str[i]) == 1 && check_alpha(&str[i-1]) == 0)
			upper_case(&str[i]);
		i++;
	}
	return (str);
}
