/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 06:14:45 by mythant           #+#    #+#             */
/*   Updated: 2025/03/10 06:21:20 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*h;

	h = "0123456789abcdef";
	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, &h[(unsigned char)str[i] / 16], 1);
			write(1, &h[(unsigned char)str[i] % 16], 1);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
/*
int	main(int argc, char *argv[])
{
	int	i = 1;

	if (argc < 2)
	{
	write(1, "No string found\n", 16);
		return (1);
	}	
	while (i < argc)
	{
		write(1, "Argument ", 9);
		write(1, &"0123456789"[i], 1);
		write(1, ": ", 2);
		ft_putstr_non_printable(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
*/
