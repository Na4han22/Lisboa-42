/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mythant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 23:22:47 by mythant           #+#    #+#             */
/*   Updated: 2025/03/10 23:29:19 by mythant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	box[32];
	long	n;
	int		size;
	int		i;

	if (!ft_check_base(base))
		return ;
	size = ft_strlen(base);
	n = nbr;
	if (n == 0)
		ft_putchar('0');
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	i = 0;
	while (n > 0)
	{
		box[i] = base[n % size];
		n = n / size;
		i++;
	}
	while (--i >= 0)
		ft_putchar(box[i]);
}
/*int	main(void)
{
	int	n;
	char	*hex;
	char	*oct;
	char	*dec;
	char	*bin;
	
	n = 42;
	hex = "0123456789abcdef";
	oct = "012345678";
	dec = "0123456789";
	bin = "01";
	
	write (1, "dec to dec\n", 12);
	ft_putnbr_base(n, dec);
	write (1, "\ndec to binary\n", 15);
	ft_putnbr_base(n, bin);
	write (1, "\ndec to oct\n", 12);
	ft_putnbr_base(n, oct);
	write (1, "\ndec to hex\n", 12);
	ft_putnbr_base(n, hex);
}*/
