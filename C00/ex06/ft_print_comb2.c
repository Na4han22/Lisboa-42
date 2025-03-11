/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:24:57 by mythant           #+#    #+#             */
/*   Updated: 2025/02/26 15:15:44 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar (i / 10 + 48);
			ft_putchar (i % 10 + 48);
			ft_putchar (' ');
			ft_putchar (j / 10 + 48);
			ft_putchar (j % 10 + 48);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
