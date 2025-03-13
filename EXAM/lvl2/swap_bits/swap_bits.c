/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:26:57 by mythant           #+#    #+#             */
/*   Updated: 2025/03/13 10:31:30 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned char	swap_bits(unsigned char c)
{
	return ((c >> 4) | (c << 4));
}
/*
int main(void)
{
	char letter_t;
	char letter_G;
	letter_t = 't';
	letter_G = 'G';

	printf("letter_t after swap: %c", swap_bits(letter_t));
	printf("\n");
	printf("letter_G after swap: %c", swap_bits(letter_G));
	printf("\n");
	return (0);
}*/
