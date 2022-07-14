/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:53:43 by tvasilev          #+#    #+#             */
/*   Updated: 2022/07/01 11:08:31 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		size;
	char	*fresult;

	size = 0;
	while (src[size])
		size++;
	result = (char *) malloc((size + 1) * sizeof(char));
	fresult = result;
	while (*src)
	{
		*result = *src;
		result++;
		src++;
	}
	*result = '\0';
	result = fresult;
	return (result);
}
