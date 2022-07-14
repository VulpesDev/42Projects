/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:11:32 by tvasilev          #+#    #+#             */
/*   Updated: 2022/07/13 12:16:55 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	result = (int *) malloc((max - min) * sizeof(int));
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
