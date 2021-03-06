/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:50:17 by tvasilev          #+#    #+#             */
/*   Updated: 2022/07/04 13:02:23 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	hel;

	hel = 2;
	if (nb < 2)
		return (0);
	while (hel < nb)
	{
		if (nb % hel == 0)
			return (0);
		hel++;
	}
	return (1);
}
