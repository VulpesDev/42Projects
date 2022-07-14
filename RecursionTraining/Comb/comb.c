/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:27:55 by tvasilev          #+#    #+#             */
/*   Updated: 2022/07/05 14:54:57 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	func(int n, int m, int *arr, int num)
{
	int	i;

	i = num;
	while (i <= (num + (m - 1)))
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("%c", '\n');
	if (num < n - m)
		func(n, m, arr, num + 1);
}

int	main(void)
{
	int	arr[5] = {1, 2, 3, 4, 5};

	func(5, 2, arr, 0);
	return (arr[1]);
}
