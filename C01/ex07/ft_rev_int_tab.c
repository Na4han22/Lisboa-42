/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:15:41 by mythant           #+#    #+#             */
/*   Updated: 2025/03/01 20:28:44 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	size --;
	while (i < size)
	{
		t = tab[i];
		tab[i] = tab[size];
		tab[size] = t;
		i++;
		size--;
	}
}
/*int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = 10;
	int	i = 0;
	int	j = 0;

	printf("Before: \n");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	printf("After: \n");
	ft_rev_int_tab(tab, size);
	while (j < size)
	{
		printf("%d", tab[j]);
		j++;
	}
}*/
