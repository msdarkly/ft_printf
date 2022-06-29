/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_nbrs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebillin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:05:30 by jebillin          #+#    #+#             */
/*   Updated: 2022/06/01 12:24:08 by jebillin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb, int *len)
{
	if (nb < 10)
		ft_putchar(nb + '0', len);
	else
	{
		ft_putunsigned(nb / 10, len);
		ft_putunsigned(nb % 10, len);
	}
}

void	ft_putnbr(int nbr, int *len)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(nbr * -1, len);
	}
	else
	{
		if (nbr > 9)
			ft_putnbr(nbr / 10, len);
		ft_putchar(nbr % 10 + '0', len);
	}
}

void	ft_puthex(unsigned int nbr, char *base, int *len)
{
	if (nbr < 16)
		ft_putchar(base[nbr], len);
	else if (nbr >= 16)
	{
		ft_puthex(nbr / 16, base, len);
		ft_puthex(nbr % 16, base, len);
	}
}

void	ft_putpointer(unsigned long nbr, char *base, int *len)
{
	if (nbr < 16)
		ft_putchar(base[nbr], len);
	else
	{
		ft_putpointer(nbr / 16, "0123456789abcdef", len);
		ft_putpointer(nbr % 16, "0123456789abcdef", len);
	}
}
