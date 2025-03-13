/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:04:54 by mythant           #+#    #+#             */
/*   Updated: 2025/03/11 03:27:30 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char *av[])
{
	int	l;
	int	r;

	if (ac == 1)
	{
		return (write (1, "\n", 1), 0);
	}
	if (ac == 2)
	{
		l = 0;
		while (av[1][l])
		{
			r = 1;
			if (av[1][l] >= 97 && av[1][l] <= 122)
				r += av[1][l] - 97;
			else if (av[1][l] >= 65 && av[1][l] <= 90)
				r += av[1][l] - 65;
			while (r--)
			{
				write (1, &av[1][l], 1);
			}
			l++;
		}
	}
	return (write (1, "\n", 1), 0);
}
