/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:58:58 by mythant           #+#    #+#             */
/*   Updated: 2025/03/19 12:03:07 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	last_word(char *str)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == 32 && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 127)
	{
		write (1, &str[j], 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word (argv[1]);
	write (1, "\n", 1);
	return (0);
}
