/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 14:03:41 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/23 15:26:33 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	ptr = malloc(size * sizeof(int));
	if (ptr == 0)
		return (0);
	while (i < size)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
