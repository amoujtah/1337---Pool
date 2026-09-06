/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <admoujta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 12:15:21 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/12 12:39:39 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		ft_putchar(alpha);
		alpha++;
	}
}
