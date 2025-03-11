/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:33:11 by mythant           #+#    #+#             */
/*   Updated: 2025/02/26 10:33:44 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 35;
	int b = 22;
	int div;
	 int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d\n", div);
	printf("Remainder: %d\n", mod);
}*/
