/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:08:29 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/16 11:05:29 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hexa;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write (1, "\\", 1);
			ft_putchar (hexa[(unsigned char)str[i] / 16]);
			ft_putchar (hexa[(unsigned char)str[i] % 16]);
		}
		else
			ft_putchar (str[i]);
		i++;
	}
}
