/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:07:14 by mythant           #+#    #+#             */
/*   Updated: 2025/02/27 15:14:01 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32) && (str[i] <= 127)))
			return (0);
		i++;
	}
	return (1);
}
/*int	 main(void)
{
	char	str[] = "SHAKIRA SHAKIRA";
	printf("Test\"%s\":%d\n", str, ft_str_is_printable(str));
	return 0;
}*/
