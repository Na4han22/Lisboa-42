/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_palindrome.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:49:19 by mythant           #+#    #+#             */
/*   Updated: 2025/03/19 13:52:09 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + strlen_recursion(s));
	}
	return (0);
}

int	checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}

int	is_palindrome(char *s)
{
	int	len;
	int	count;

	len = strlen_recursion(s);
	count = 0;
	return (checker(s, len - 1, count));
}
/*int main(void)
{
    if (is_palindrome("level"))
        printf("'level' is a palindrome.\n");
    else
        printf("'level' is not a palindrome.\n");

    if (is_palindrome("hello"))
        printf("'hello' is a palindrome.\n");
    else
        printf("'hello' is not a palindrome.\n");

    if (is_palindrome("a"))
        printf("'a' is a palindrome.\n");
    else
        printf("'a' is not a palindrome.\n");

    if (is_palindrome(""))
        printf("'' is a palindrome.\n");
    else
        printf("'' is not a palindrome.\n");

    return 0;
}*/
