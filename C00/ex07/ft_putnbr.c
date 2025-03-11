/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:45:26 by mythant           #+#    #+#             */
/*   Updated: 2025/02/27 03:43:37 by mythant          ###   ########.fr       */
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
    ft_putnbr(2147483647);
    return (0);
}*/
