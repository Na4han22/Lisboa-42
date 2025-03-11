/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:57:19 by mythant           #+#    #+#             */
/*   Updated: 2025/02/27 15:05:35 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65) && (str[i] <= 90)))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	str[] = "SHAKIRA";
	printf("Test\"%s\":%d\n",str, ft_str_is_uppercase(str));
	return 0;
}*/
