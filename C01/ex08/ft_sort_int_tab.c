/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:30:00 by mythant           #+#    #+#             */
/*   Updated: 2025/03/01 20:51:51 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] <= tab[j])
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
		}
		i++;
	}
}
/*int	main(void)
{
	int tab[5] = { 4, 2, 5, 1, 3};
	int size= 5;
	int i = 0;
	int j = 0;
	printf("Before: \n");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	printf("After:\n");
	ft_sort_int_tab (tab, size);
	while (j < size)
	{
		printf("%d", tab[j]);
		j++;
	}
}*/
