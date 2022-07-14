/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:57:26 by tvasilev          #+#    #+#             */
/*   Updated: 2022/06/26 14:27:23 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp_tab;
	int	is_done;
	
	is_done = 0;
	while(!is_done)
	{
		is_done = 1;
		i = 0;
		while (i < size-1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp_tab = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp_tab;
				is_done = 0;
			}
			i++;
		}
	}
}
