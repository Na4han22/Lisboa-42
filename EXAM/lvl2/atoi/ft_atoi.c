/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 05:42:07 by mythant           #+#    #+#             */
/*   Updated: 2025/03/13 05:53:53 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	sign = 1;
	i = 0;
	result = 0;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (int)str[i] - '0';
		++i;
	}
	return (result * sign);
}
/*int	main(void)
{
	char *n = "-----++1237nabd";
	printf("test: %d\n", ft_atoi(n));
	return (0);
}*/
