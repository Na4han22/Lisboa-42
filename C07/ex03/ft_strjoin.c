/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 01:38:35 by mythant           #+#    #+#             */
/*   Updated: 2025/03/19 01:38:41 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_len(char *str)
{
	int	count;
	if (!str)
		return (0);
	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
char	*ft_strcatsep(char *dest, char *src, char *sep)
{
	char	*start;
	start = dest;
	if (src == NULL || dest == NULL || sep == NULL)
		return (NULL);
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	if (!++src && *sep)
		*dest = *sep++;
	return (start);		
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	len_sep;
	char	*cat;
	char	*result;

	if (size <= 0 || !strs || !sep)
        return ((char *)malloc(1));

    i = 0;
    len = 0;
    len_sep = ft_len(sep);

    while (i < size)
    {
        len += ft_len(strs[i]);
        if (i < size - 1)
            len += len_sep;
        i++;
    }

    cat = (char *)malloc(len + 1);
    if (!cat)
        return (NULL);

    result = cat;
    i = 0;
    while (i < size)
    {
        cat = ft_strcatsep(cat, strs[i], sep);
        i++;
        if (i == size)
            *cat = '\0';
    }

    return (result);
}

