/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:32:18 by mythant           #+#    #+#             */
/*   Updated: 2025/02/26 10:32:54 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int x = 22;
	int y = 35;

	printf("Before: x = %d, y = %d\n", x,y);
	ft_swap(&x,&y);
	printf("After: x = %d, y = %d\n", x,y);
	return 0;
}
*/
