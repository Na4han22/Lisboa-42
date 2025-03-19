/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:35:08 by mythant           #+#    #+#             */
/*   Updated: 2025/03/19 12:42:42 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}
/*
int	main(void)
{
	unsigned int	len;

	int	tab[] = {0, 2, 9, 4, 5, 7, 6, 8};
	len = 8;

	int	result = max(tab, len);
	printf("Test:%d\n", result);
}*/
