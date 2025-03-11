/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:16:54 by mythant           #+#    #+#             */
/*   Updated: 2025/02/25 16:17:49 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	m;

	m = '0';
	while (m <= '9')
	{
		write(1, &m, 1);
		m++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return 0;
}
*/
