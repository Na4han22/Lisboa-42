/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:31:04 by mythant           #+#    #+#             */
/*   Updated: 2025/02/27 14:46:20 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] <= 57) && (str[i] >= 48)))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char str[] = "Masld";
	printf("Test(\"%s\"):%d\n", ft_str_is_numeric(str));
	return 0;
}*/
