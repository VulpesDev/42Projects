/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:09:50 by tvasilev          #+#    #+#             */
/*   Updated: 2022/07/13 13:55:58 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;
	int	length;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	length = max - min;
	result = (int *) malloc(length * sizeof(int));
	if (!result)
	{
		return (-1);
	}
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	*range = result;
	return (length);
}
