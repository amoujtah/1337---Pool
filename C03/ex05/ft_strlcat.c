/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:44:34 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/18 16:56:55 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	j = ft_strlen(dest);
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size <= 0)
		return (size_src + size);
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (size < size_dest)
	{
		return (size_src + size);
	}
	else
		return (size_src + size_dest);
}
