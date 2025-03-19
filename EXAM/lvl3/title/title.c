/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   title.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:20:11 by mythant           #+#    #+#             */
/*   Updated: 2025/03/19 17:20:47 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void title_case(char *str)
{
    int capitalize_next = 1;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            capitalize_next = 1;
        }
        else if (capitalize_next)
        {
            if (*str >= 'a' && *str <= 'z')
                *str = *str - 32;
            capitalize_next = 0;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}
/*
int main(void)
{
    char sentence[] = "hello WORLD, how ARE you?";
    printf("Original: %s\n", sentence);
    
    title_case(sentence);
    printf("Title Case: %s\n", sentence);

    return 0;
}*/
