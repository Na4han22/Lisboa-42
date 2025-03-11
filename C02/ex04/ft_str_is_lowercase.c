/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:47:24 by mythant           #+#    #+#             */
/*   Updated: 2025/02/27 17:53:32 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97) && (str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}
/*int 	main(void)
{
	char str[] = "aaaaaahhhhhhhhhh";
	printf("Test\"%s\":%d\n", str, ft_str_is_lowercase(str));
	return (0);
}*/
