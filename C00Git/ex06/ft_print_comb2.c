/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:18:03 by tvasilev          #+#    #+#             */
/*   Updated: 2022/06/24 12:20:19 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void)
{
	int		ab;
	int		cd;
	char	chunks[5];

	chunks[2] = ' ';
	ab = 0;
	cd = 1;
	while (ab < 99)
	{
		while (cd < 100)
		{
			chunks[0] = ab / 10 + '0';
			chunks[1] = ab % 10 + '0';
			chunks[3] = cd / 10 + '0';
			chunks[4] = cd % 10 + '0';
			write(1, &chunks, 5);
			if (ab != 98 && ab != 99)
			{
				write(1, ", ", 2);
			}
			cd++;
		}
		ab++;
		cd = ab + 1;
	}
}
