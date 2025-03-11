/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:03:14 by mythant           #+#    #+#             */
/*   Updated: 2025/03/03 12:37:40 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar ('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr (n / 10);
	}
	ft_putchar (n % 10 + '0');
}
/*int main(void)
{
    ft_putnbr(-2147483648);
	ft_putchar('\n');
    ft_putnbr(0);
    return (0);
}*/
