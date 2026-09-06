/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 01:53:20 by admoujta          #+#    #+#             */
/*   Updated: 2026/09/01 21:27:16 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	pos;
	int	neg;

	pos = 0;
	neg = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			pos = 1;
		}
		else if (f(tab[i], tab[i + 1]) < 0)
		{
			neg = 1;
		}
		i++;
	}
	if (pos == 1 && neg == 1)
		return (0);
	return (1);
}
