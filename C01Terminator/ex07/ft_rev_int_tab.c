/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 12:11:51 by tvasilev          #+#    #+#             */
/*   Updated: 2022/06/26 13:56:19 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp_tab;

	i = 0;
	temp_tab = 0;
	while (i < (size / 2))
	{
		temp_tab = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = temp_tab;
		i++;
	}
}
