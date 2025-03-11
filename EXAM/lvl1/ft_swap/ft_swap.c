/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:41:58 by mythant           #+#    #+#             */
/*   Updated: 2025/03/06 22:48:04 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	main(void)
{
	int	x;
	int	y;

	x = 22;
	y = 13;
	printf ("Before:x = %d, y = %d\n", x, y);
	ft_swap (&x, &y);
	printf ("After:x = %d, y = %d\n", x, y);
}
