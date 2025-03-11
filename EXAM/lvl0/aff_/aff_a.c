/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:16:52 by mythant           #+#    #+#             */
/*   Updated: 2025/03/06 20:18:51 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 2)
	{
		write (1, "a\n", 2);
		return (0);
	}
	i = 0;
	while (argv [1][i] != '\0')
	{
		if (argv[1][i] == 97)
		{
			write (1, "a", 1);
			break ;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
