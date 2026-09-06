/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 03:59:26 by admoujta          #+#    #+#             */
/*   Updated: 2026/09/01 19:45:53 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_doop(char *nb1, char op, char *nb2);

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
void	ft_error(char op, int n2);
void	ft_init_ops(int (*f[5])(int, int));
#endif
