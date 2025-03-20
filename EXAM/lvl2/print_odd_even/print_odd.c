/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_odd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:11:39 by mythant           #+#    #+#             */
/*   Updated: 2025/03/20 15:21:25 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n /10);
	}
	ft_putchar(n % 10 + 48);
}

void	print_odd(int start, int end)
{
	if (start > end)
		return;
	if (start % 2 != 0)
	{
		ft_putnbr(start);
		write(1, "\n", 1);
	}
	print_odd(start + 1, end);
}

int	main()
{
	print_odd(1, 20);
	return (0);
}
