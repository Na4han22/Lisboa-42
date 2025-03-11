/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:24:45 by mythant           #+#    #+#             */
/*   Updated: 2025/03/06 23:31:51 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (len--)
			write (1, &argv[1][len], 1);
	}
	write (1, "\n", 1);
}
