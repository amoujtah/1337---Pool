/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 04:17:55 by admoujta          #+#    #+#             */
/*   Updated: 2026/09/01 19:49:09 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_init_ops(int (*f[5])(int, int))
{
	f[0] = ft_add;
	f[1] = ft_sub;
	f[2] = ft_mul;
	f[3] = ft_div;
	f[4] = ft_mod;
}

void	ft_error(char op, int n2)
{
	if (op == '/' && n2 == 0)
		write(1, "Stop : division by zero", 23);
	else if (op == '%' && n2 == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(0);
}

void	ft_doop(char *nb1, char op, char *nb2)
{
	int	n1;
	int	n2;
	int	(*f[5])(int, int);

	n1 = ft_atoi(nb1);
	n2 = ft_atoi(nb2);
	ft_init_ops(f);
	if (op == '+')
		ft_putnbr(f[0](n1, n2));
	else if (op == '-')
		ft_putnbr(f[1](n1, n2));
	else if (op == '*')
		ft_putnbr(f[2](n1, n2));
	else if (op == '/' && n2 != 0)
		ft_putnbr(f[3](n1, n2));
	else if (op == '%' && n2 != 0)
		ft_putnbr(f[4](n1, n2));
	else
		ft_error(op, n2);
}
