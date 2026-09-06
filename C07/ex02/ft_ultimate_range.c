/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 20:31:14 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/24 17:36:00 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *)malloc((size) * sizeof(int));
	if (ptr == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = ptr;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (size);
}
