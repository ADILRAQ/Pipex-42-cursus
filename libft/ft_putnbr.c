/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:16:21 by araqioui          #+#    #+#             */
/*   Updated: 2023/02/11 19:17:35 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	ft_putnbr_ft(int n)
{
	long	nb;

	nb = n;
	if (n < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr_ft(nb / 10);
		ft_putnbr_ft(nb % 10);
	}
}

int	ft_putnbr_length(int n)
{
	int		i;
	long	nb;

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
	ft_putnbr_ft(n);
	return (i);
}
