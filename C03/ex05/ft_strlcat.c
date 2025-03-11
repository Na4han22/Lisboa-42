/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 05:37:26 by mythant           #+#    #+#             */
/*   Updated: 2025/03/09 05:37:57 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(dest);
	if (i >= size)
		return (ft_strlen(src) + size);
	while (src[j] != '\0' && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
int	main(int argc, char **argv)
{
	char	dest[50] = "POOPYBUTTHOLE";
	unsigned int	size = 50;
	unsigned int	result;

	if (argc < 2)
	{
		printf("Usage: %s <source string>\n", argv[0]);
		return (1);
	}
	result = ft_strlcat(dest, argv[1], size);
	printf("Source: %s\nDestination: %s\nResult: %u\n", argv[1], dest, result);
	return (0);
}*/
