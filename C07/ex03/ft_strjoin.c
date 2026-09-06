/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 23:52:43 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/24 01:17:10 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strcat(char *src, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len_total;

	i = 0;
	len_total = 0;
	if (size > 0)
		len_total += ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		len_total += ft_strlen(strs[i]);
		i++;
	}
	return (len_total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;
	int		new_len;

	new_len = total_len(size, strs, sep);
	i = 0;
	ptr = malloc ((new_len + 1) * sizeof(char));
	if (ptr == 0)
	{
		return (0);
	}
	ptr[0] = '\0';
	while (i < size)
	{
		ptr = ft_strcat(strs[i], ptr);
		if (i != size - 1)
		{
			ptr = ft_strcat(sep, ptr);
		}
		i++;
	}
	return (ptr);
}
/*int	main(void)
{
	char	*strs1[] = {"Hello", "1337", "World"};
	char	*strs2[] = {"A", "B", "C"};
	char	*strs3[] = {"Piscine"};
	char	*strs4[] = {"", "abc", ""};
	char	*result;

	result = ft_strjoin(3, strs1, " - ");
	printf("1: %s\n", result);
	free(result);

	result = ft_strjoin(3, strs2, ",");
	printf("2: %s\n", result);
	free(result);

	result = ft_strjoin(1, strs3, "---");
	printf("3: %s\n", result);
	free(result);

	result = ft_strjoin(3, strs4, ":");
	printf("4: %s\n", result);
	free(result);

	result = ft_strjoin(0, strs1, "test");
	printf("5: [%s]\n", result);
	free(result);

	result = ft_strjoin(3, strs2, "");
	printf("6: %s\n", result);
	free(result);

	return (0);
}*/
