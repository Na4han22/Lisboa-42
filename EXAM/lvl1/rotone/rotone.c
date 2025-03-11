/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:32:58 by mythant           #+#    #+#             */
/*   Updated: 2025/03/06 23:41:58 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rotone(char *str)
{
	while (*str)
	{
		if ((*str >= 65 && *str <= 89)
			|| (*str >= 97 && *str <= 121))
			ft_putchar (*str + 1);
		else if (*str == 90 || *str == 122)
			ft_putchar (*str - 25);
		else
			ft_putchar (*str);
		++str;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar ('\n');
	return (0);
}
