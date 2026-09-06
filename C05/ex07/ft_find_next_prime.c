/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 19:19:48 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/20 20:58:54 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}	
	return (nb);
}
