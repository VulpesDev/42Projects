/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:01:20 by tvasilev          #+#    #+#             */
/*   Updated: 2022/07/08 11:12:55 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	start;
	long	end;
	long	mid;

	start = 0;
	end = nb;
	mid = 0;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
		{
			return (mid);
		}
		else if (mid * mid < nb)
		{
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	return (0);
}
