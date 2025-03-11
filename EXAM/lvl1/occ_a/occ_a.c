/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 03:13:53 by mythant           #+#    #+#             */
/*   Updated: 2025/03/11 03:26:40 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	occ_a(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 65)
			j++;
		i++;
	}
	return (j);
}
/*int	main(int argc, char *argv[])
{
	int	a;

	if (argc != 2)
	{
		printf("404: %s <ERROR>\n", argv[0]);
		return (1);
	}
	a = occ_a(argv[1]);
	{
		printf("OCCURANCE: %d\n", a);
		return (0);
	}
}*/
