/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 03:27:58 by mythant           #+#    #+#             */
/*   Updated: 2025/03/11 03:44:47 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		last;
	char	c;

	i = 0;
	last = ft_strlen(str) - 1;
	while (i < last)
	{
		c = str[i];
		str[i] = str[last];
		str[last] = c;
		i++;
		last--;
	}
	return (str);
}
/*int	main(int argc, char **argv)
{
	char	og[1000];
	char	*mnt;

	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}
	strcpy(og, argv[1]);
	mnt = ft_strrev(argv[1]);
	printf("OG: %s\n", og);
	printf("MNT: %s\n", mnt);
}*/
