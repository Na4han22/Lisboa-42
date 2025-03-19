/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:58:00 by mythant           #+#    #+#             */
/*   Updated: 2025/03/16 10:01:40 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*int	main()
{
	char	*s1 = "Poopyb";
	char	*s2 = "poppyb";

	printf("OG:%d\n", strcmp(s1, s2));
	printf("MNT:%d\n", ft_strcmp(s1, s2));
}*/
