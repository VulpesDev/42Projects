/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:01:43 by tvasilev          #+#    #+#             */
/*   Updated: 2022/06/30 13:15:41 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	long	result;
	char	digit;

	result = nb;
	if (result < 0)
	{
		result *= -1;
		write(1, "-", 1);
	}
	if (result != 0)
	{
		digit = (result % 10) + '0';
		if (result / 10 != 0)
			ft_putnbr(result / 10);
		write(1, &digit, 1);
	}
	else
	{
		write(1, "0", 1);
	}
}
