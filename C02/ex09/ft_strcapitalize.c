/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:13:46 by mythant           #+#    #+#             */
/*   Updated: 2025/03/06 09:37:43 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (!((str[i - 1] >= 97 && str[i - 1] <= 122)
					|| (str[i - 1] >= 65 && str[i - 1] <= 90)
					|| (str[i - 1] >= 48 && str[i - 1] <= 57)))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_strcapitalize(argv[i]);
				write(1, "\n", 1);
				i += 1;
		}
	}
	return (0);
}*/
