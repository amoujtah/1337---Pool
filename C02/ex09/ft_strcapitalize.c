/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 12:11:41 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/15 14:15:14 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 1;
	str = ft_lowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (space == 1)
			{
				str[i] -= 32;
				space = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			space = 0;
		else
			space = 1;
		i++;
	}
	return (str);
}
