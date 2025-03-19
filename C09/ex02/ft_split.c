/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 11:21:17 by mythant           #+#    #+#             */
/*   Updated: 2025/03/16 11:58:25 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	is_separator(char c, char *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

int	count(char *str, char *sep)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (!is_separator(*str, sep))
		{
			i++;
			while (*str && !is_separator(*str, sep))
				str++;
		}
		else
		{
			str++;
		}
	}
	return (i);
}

char	*extract(char *str, char *sep)
{
	char	*word;
	int		l;
	int		i;

	l = 0;
	while (str[l] && !is_separator(str[l], sep))
		l++ ;
	word = (char *) malloc(sizeof(char) * (l + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < l)
	{
		word[i] = str[i];
		i++;
	}
	word[l] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;

	i = 0;
	words = (char **) malloc(sizeof(char *) * (count(str, charset) + 1));
	if (!words)
		return (NULL);
	while (*str)
	{
		if (!is_separator(*str, charset))
		{
			words[i++] = extract(str, charset);
			while (*str && !is_separator(*str, charset))
				str++;
		}
		else
			str++;
	}
	words[i] = (NULL);
	return (words);
}
/*int	main(int ac, char *av[])
{
	char	*str;
	char	*charset;
	char	**result;
	int		i;

	if (ac != 3)
	{
		printf("Error: %s 404\n", av[0]);
		return (1);
	}
	str = av[1];
	charset = av[2];
	result = ft_split(str, charset);
	i = 0;
	while (result[i])
	{
		printf("String %d: %s\n", i + 1, result[i]);
		free (result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
