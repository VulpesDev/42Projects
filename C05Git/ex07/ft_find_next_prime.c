/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:13:01 by tvasilev          #+#    #+#             */
/*   Updated: 2022/07/13 11:13:10 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	x = 2;
	while (x <= nb / 2)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	found;

	if (nb < 3)
		return (2);
	found = 0;
	if (ft_is_prime(nb))
		found = 1;
	else if (nb % 2 == 0)
		nb += 1;
	while (!found)
	{
		if (ft_is_prime(nb))
			found = 1;
		else
			nb += 2;
	}
	return (nb);
}
