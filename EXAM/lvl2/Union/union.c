/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:05:45 by mythant           #+#    #+#             */
/*   Updated: 2025/03/18 15:53:00 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	new_shit(char *str, int max, char c)
{
	int	i;

	i = -1;
	while (++i < max)
		if (str[i] == c)
			return (0);
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i])
		if (new_shit(s1, i, s1[i]))
			write (1, &s1[i], 1);
	j = -1;
	while (s2[++j])
		if ((new_shit(s2, j, s2[j])) && (new_shit(s1, i, s2[j])))
			write (1, &s2[j], 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
