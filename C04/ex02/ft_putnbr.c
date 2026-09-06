/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 11:57:22 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/17 14:21:05 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putchar ((nb % 10) + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
