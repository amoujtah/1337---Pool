/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 01:48:26 by admoujta          #+#    #+#             */
/*   Updated: 2026/09/01 21:25:40 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			counter++;
		i++;
	}
	return (counter);
}
