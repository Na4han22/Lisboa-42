/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:46:08 by mythant           #+#    #+#             */
/*   Updated: 2025/02/26 18:01:21 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*int	main(void)
{
	char *str = "Hello!";
	int	len;
	len = ft_strlen(str);
	printf("String: %s\n", str);
	printf("Length: %d\n", len);
}*/
