/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 20:20:38 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/30 15:52:29 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;
	int	flag;

	flag = 0;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_is_separator(str[i], charset))
			flag = 0;
		else if (flag == 0)
		{
			count++;
			flag = 1;
		}
		i++;
	}
	return (count);
}

int	ft_wordlen(char *str, int i, char *charset)
{
	int	len;

	len = 0;
	while (str[i] && !ft_is_separator(str[i], charset))
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_copy_word(char *str, int start, int len)
{
	char	*ptr;
	int		i;

	ptr = malloc ((len + 1) * sizeof(char));
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = str[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		count;
	int		i;
	int		len;

	i = 0;
	count = ft_count_words(str, charset);
	result = malloc((count + 1) * sizeof(char *));
	if (result == 0)
		return (0);
	count = 0;
	while (str[i])
	{
		if (ft_is_separator(str[i], charset))
			i++;
		else
		{
			len = ft_wordlen(str, i, charset);
			result[count] = ft_copy_word(str, i, len);
			i = i + len;
			count++;
		}
	}
	result[count] = 0;
	return (result);
}
