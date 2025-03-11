/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:27:14 by mythant           #+#    #+#             */
/*   Updated: 2025/02/27 14:29:32 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 'A')
					&& (str[i] <= 'Z'))
				|| ((str[i] >= 'a') && (str[i] <= 'z'))))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char str[] = "Hello";
	printf("Test(\"%s\"): %d\n",str ,ft_str_is_alpha(str));
	return 0;
}*/
