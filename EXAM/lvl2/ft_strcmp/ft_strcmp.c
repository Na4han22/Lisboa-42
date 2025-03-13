/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 03:00:55 by mythant           #+#    #+#             */
/*   Updated: 2025/03/11 03:11:27 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main(int argc, char **argv)
{
	int	og;
	int	mnt;

	if (argc != 3)
	{
		printf("404: %s <ERROR>\n", argv[0]);
		return (1);
	}
	og = strcmp(argv[1], argv[2]);
	mnt = ft_strcmp(argv[1], argv[2]);
	printf("OG: %d\n", og);
	printf("MNT: %d\n", mnt);
}*/
