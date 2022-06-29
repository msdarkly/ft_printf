/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebillin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:21:43 by jebillin          #+#    #+#             */
/*   Updated: 2022/05/27 16:06:10 by jebillin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

void	ft_putunsigned(unsigned int nb, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_puthex(unsigned int nbr, char *base, int *len);
void	ft_putpointer(unsigned long nbr, char *base, int *len);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
int		ft_printf(const char *format, ...);

#endif
