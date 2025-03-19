/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:55:41 by mythant           #+#    #+#             */
/*   Updated: 2025/03/16 09:57:39 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}
/*int	main()
{
	char	*str = "Shakira";
	int	r;

	r = ft_strlen(str);
	printf("Length: %d\n", r);
}*/
