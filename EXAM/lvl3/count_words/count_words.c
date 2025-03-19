/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:05:28 by mythant           #+#    #+#             */
/*   Updated: 2025/03/19 14:05:50 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_letter(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*str)
	{
		if (is_letter (*str) && !count)
		{
			i++;
			count = 1;
		}
		else if (!is_letter (*str))
		{
			count = 0;
		}
		str++;
	}
	return (i);
}
/*int main(void)
{
    char *str = "Hello, how are you?";
    int words = count_words(str);
    printf("Number of words: %d\n", words);
    return 0;
}*/
