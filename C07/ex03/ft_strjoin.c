/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 04:00:06 by mythant           #+#    #+#             */
/*   Updated: 2025/03/09 05:22:50 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	if (size <= 0)
		return (1);
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

char	*cat(int size, char **strs, char *sep, int total_len)
{
	int		i;
	int		j;
	char	*result;
	char	*ptr;

	result = malloc(total_len + 1);
	if (result == NULL)
		return (NULL);
	ptr = result;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*ptr++ = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				*ptr++ = sep[j++];
		}
		i++;
	}
	*ptr = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	total_len;

	total_len = total_length(size, strs, sep);
	return (cat(size, strs, sep, total_len));
}
/*
int	main(int argc, char **argv)
{
	char	*sep = " - ";
	char	*result;

	if (argc < 2)
	{
		printf("Usage: %s <string1> <string2> ... <stringN>\n", argv[0]);
		return (1);
	}
	result = ft_strjoin(argc - 1, &argv[1], sep);
	if (result)
	{
		printf("Joined string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}
*/
