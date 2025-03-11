/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 19:29:15 by mythant           #+#    #+#             */
/*   Updated: 2025/03/06 19:50:17 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int	main(void)
{
	char s1[] = "Hello Baby";
	char s2[] = "Ola como s";

	ft_strcpy(s1, s2);
	printf("Test: %s\n", s1);
}*/
