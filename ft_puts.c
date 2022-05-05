/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:36:51 by mbarreto          #+#    #+#             */
/*   Updated: 2022/05/05 16:42:59 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str && str[i])
		i++;
	return (write(1, str, i));
}

int	ft_putnumber(int n)
{
	unsigned long int	sig;

	sig = 1;
	if (n < 0)
	{
		sig = -1;
		ft_putchar('-');
	}
	return (ft_conv_base(n * sig, "0123456789", 10) + 1);
}

int	ft_putui(unsigned int n, char *base, int base_size)
{
	return (ft_conv_base(n, base, base_size));
}

int	ft_putul(unsigned long n)
{
	return (ft_conv_base(n, "0123456789abcdef", 16));
}
//int	main(void)
//{
//	printf("\ncount: %d\n", '9');
//	printf("\n===============================\n");
//	ft_printf("\ncount: %d\n", '9');
//}