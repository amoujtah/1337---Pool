/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 01:31:09 by admoujta          #+#    #+#             */
/*   Updated: 2026/09/03 01:48:15 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	check_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_nbrlen(long nbr, int base_size)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr >= base_size)
	{
		nbr = nbr / base_size;
		len++;
	}
	return (len);
}

void	ft_fill_base(char *ptr, long nb, char *base, int len)
{
	int	base_size;

	base_size = ft_strlen(base);
	while (nb >= base_size)
	{
		ptr[--len] = base[nb % base_size];
		nb = nb / base_size;
	}
	ptr[--len] = base[nb % base_size];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ptr;
	long	nb;
	int		len;

	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	len = ft_nbrlen(nb, ft_strlen(base_to));
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ptr[len] = '\0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	ft_fill_base(ptr, nb, base_to, len);
	return (ptr);
}
