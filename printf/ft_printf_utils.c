/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:31:46 by araqioui          #+#    #+#             */
/*   Updated: 2023/02/11 19:56:07 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static int	ft_len_hex_long(unsigned long nb)
{
	int	i;

	i = 0;
	if (!nb)
		return (1);
	while (nb > 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}

int	ft_putpointer(unsigned long nb)
{
	int		len;
	int		keep;
	char	*str;
	char	*hex;

	hex = ft_strdup("0123456789abcdef");
	len = ft_len_hex_long(nb);
	keep = len;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (!nb)
		str[0] = '0';
	while (nb > 0)
	{
		str[len--] = hex[nb % 16];
		nb /= 16;
	}
	write(1, "0x", 2);
	keep += 2;
	ft_putstr(str);
	free(hex);
	free(str);
	return (keep);
}

static int	ft_len_hex_unsg(unsigned int nb)
{
	int	i;

	i = 0;
	if (!nb)
		return (1);
	while (nb > 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}

void	ft_put_hex(int c, int *i, unsigned int nb)
{
	int		len;
	char	*str;
	char	*hex;

	if (c == 'x')
		hex = ft_strdup("0123456789abcdef");
	else
		hex = ft_strdup("0123456789ABCDEF");
	len = ft_len_hex_unsg(nb);
	*i = len;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return ;
	str[len--] = '\0';
	if (!nb)
		str[0] = '0';
	while (nb > 0)
	{
		str[len--] = hex[nb % 16];
		nb /= 16;
	}
	ft_putstr(str);
	free(hex);
	free(str);
}
