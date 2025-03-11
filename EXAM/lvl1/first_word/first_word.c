/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:39:55 by mythant           #+#    #+#             */
/*   Updated: 2025/03/06 23:05:36 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_isspace(int i)
{
	if ((i == ' ') || (i >= 9 && i <= 13))
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (ft_isspace(argv[1][i]))
			i++;
		while (!(ft_isspace(argv[1][i])) && (argv[1][i]))
			write (1, &argv[1][i++], 1);
	}
	write (1, "\n", 1);
	return (0);
}
