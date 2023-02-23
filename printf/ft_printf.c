/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:45:43 by araqioui          #+#    #+#             */
/*   Updated: 2023/02/11 19:56:18 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_putunsig(unsigned int nb)
{
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putunsig(nb / 10);
		ft_putunsig(nb % 10);
	}
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int				i;
	unsigned int	nb;

	nb = n;
	i = 0;
	if (n == 0)
		i = 1;
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	ft_putunsig(n);
	return (i);
}

int	ft_show(char c, va_list ptr)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		i = ft_putstr(va_arg(ptr, char *));
	else if (c == 'p')
		i = ft_putpointer(va_arg(ptr, unsigned long));
	else if (c == 'd' || c == 'i')
		i = ft_putnbr_length(va_arg(ptr, int));
	else if (c == 'u')
		i = ft_putnbr_unsigned(va_arg(ptr, unsigned int));
	else if (c == 'x' || c == 'X')
		ft_put_hex(c, &i, va_arg(ptr, unsigned int));
	else
		i = ft_putchar(c);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		len;

	len = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (len);
			len += ft_show(*str, ptr);
			str++;
		}
		if (*str && *str != '%')
		{
			write(1, str++, 1);
			len++;
		}
	}
	va_end(ptr);
	return (len);
}
