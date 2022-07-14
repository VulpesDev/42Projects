/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:09:17 by tvasilev          #+#    #+#             */
/*   Updated: 2022/06/25 14:38:16 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	digit;

	nbl = nb;
	digit = ' ';
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl *= -1;
	}
	if (nbl != 0)
	{
		digit = (nbl % 10) + '0';
		if (nbl / 10 != 0)
			ft_putnbr(nbl / 10);
		write(1, &digit, 1);
	}
	else
	{
		write(1, "0", 1);
	}
}
