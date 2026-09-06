/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admoujta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 14:33:13 by admoujta          #+#    #+#             */
/*   Updated: 2026/08/13 15:38:58 by admoujta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	j = 0;
	i = 0;
	tmp = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*int main()
{
	int tab[5] = {5,2,4,1,3};
	int size = 5;
	for(int i = 0; i < size; i++)
	{
		printf("%d, ",tab[i]);
	}
	printf("--------------Apres le tri-----------------\n");
	ft_sort_int_tab(tab,size);
	for(int i = 0; i < size; i++)
        {
                printf("%d, ",tab[i]);
        }

}*/
