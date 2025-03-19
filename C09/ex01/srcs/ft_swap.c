/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:51:48 by mythant           #+#    #+#             */
/*   Updated: 2025/03/16 09:55:24 by mythant          ###   ########.fr       */
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

/*int	main()
{
	int	x = 22;
	int	y = 35;

	ft_swap(&x, &y);
	printf("After: x = %d, y = %d\n", x, y);
}*/
