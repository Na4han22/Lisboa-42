/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:15:31 by mythant           #+#    #+#             */
/*   Updated: 2025/03/06 10:51:20 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: %s <str> <substr>\n", argv[0]);
		return 1;
	}

	char *str = argv[1];
	char *to_find = argv[2];
	char *result;

	printf("Str:%s\n",str);
	printf("To find: %s\n", to_find);
	result = ft_strstr(str, to_find);
	if (result)
	printf("Substr found: %s\n", result);
	else
	printf("Substr not found\n");
	return 0;
}*/
