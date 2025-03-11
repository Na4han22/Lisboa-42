/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:20:54 by jose-vda          #+#    #+#             */
/*   Updated: 2025/03/01 14:21:00 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_line(int x, char start, char mid, char end)
{
	int	i;

	i = 0;
	ft_putchar (start);
	while (i < x - 2)
	{
		ft_putchar (mid);
		i++;
	}
	if (x > 1)
	{
		ft_putchar (end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	print_line (x, 'o', '-', 'o');
	while (i < y - 2)
	{
		print_line (x, '|', ' ', '|');
		i++;
	}
	if (y > 1)
	{
		print_line (x, 'o', '-', 'o');
	}
}
