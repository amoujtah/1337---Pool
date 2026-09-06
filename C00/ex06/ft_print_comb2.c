/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 16:05:08 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/12 17:19:53 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	pr_comb2(char a, char b)
{
	ft_putchar (a / 10 + '0');
	ft_putchar (a % 10 + '0');
	ft_putchar (' ');
	ft_putchar (b / 10 + '0');
	ft_putchar (b % 10 + '0');
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			pr_comb2(a, b);
			if (!(a == 98 && b == 99))
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
