/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:21:28 by jose-vda          #+#    #+#             */
/*   Updated: 2025/03/01 14:21:33 by jose-vda         ###   ########.fr       */
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
	print_line (x, 65, 66, 65);
	while (i < y - 2)
	{
		print_line (x, 66, ' ', 66);
		i++;
	}
	if (y > 1)
	{
		print_line (x, 67, 66, 67);
	}
}
