/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 07:48:45 by mythant           #+#    #+#             */
/*   Updated: 2025/03/13 00:13:55 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_argv(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (argv[1][i])
		{
			write (1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	char	*t;
	int		i;
	int		j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					t = argv[i];
					argv[i] = argv[j];
					argv[j] = t;
				}
				j++;
			}
			i++;
		}
		ft_print_argv(argc, argv);
	}
	return (0);
}
