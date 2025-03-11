/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:27:25 by mythant           #+#    #+#             */
/*   Updated: 2025/02/26 10:34:53 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int x = 35;
	int y = 22;
	
	ft_ultimate_div_mod(&x, &y);
	printf("Division: %d\n", x);
	printf("Remainder: %d\n", y);
}*/
