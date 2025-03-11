/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:26:18 by mythant           #+#    #+#             */
/*   Updated: 2025/03/06 21:34:36 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

void	ft_rot_13(char *str)
{
	while (*str++)
	{
		if (97 <= *(str - 1) && *(str - 1) <= 122)
			ft_putchar(((*(str - 1) - 97 + 13) % 26) + 97);
		else if (65 <= *(str - 1) && *(str - 1) <= 122)
			ft_putchar(((*(str - 1) - 65 + 13) % 26) + 65);
		else
			ft_putchar (*(str - 1));
	}
}

int	main(int ac, char *av[])
{
	if (ac == 2)
		ft_rot_13(av[1]);
	ft_putchar('\n');
	return (0);
}
