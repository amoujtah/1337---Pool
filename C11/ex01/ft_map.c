/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 01:42:02 by admoujta          #+#    #+#             */
/*   Updated: 2026/09/01 01:44:06 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = malloc((length) * sizeof(int));
	if (ptr == 0)
		return (0);
	while (i < length)
	{
		ptr[i] = f(tab[i]);
		i++;
	}
	return (ptr);
}
