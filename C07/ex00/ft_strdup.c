/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:23:46 by mythant           #+#    #+#             */
/*   Updated: 2025/03/08 22:30:01 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		l;

	l = 0;
	while (src[l])
		l++;
	dest = (char *) malloc(sizeof(char) * (l + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	char	*og;
	char	*mnt;

	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}
	og = strdup(argv[1]);
	mnt = ft_strdup(argv[1]);

	if (og && mnt)
	{
		printf("OG strdup: %s\n", og);
		printf("MNT ft_strdup: %s\n", mnt);
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	free(og);
	free(mnt);

	return (0);
}*/
