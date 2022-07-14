/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:49:24 by tvasilev          #+#    #+#             */
/*   Updated: 2022/07/13 14:15:03 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
	{
		count++;
	}
	return (count);
}

void	ft_count_size(int *char_count, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		*char_count += ft_strlen(strs[i]);
		i++;
	}
	*char_count += ft_strlen(sep) * (size - 1);
	*char_count += 1;
}

void	helper_func(char *result, char **strs, char *sep, int size)
{
	int	j;
	int	b;
	int	i;

	i = 0;
	b = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[b++] = strs[i][j];
			j++;
		}
		if (i == size - 1)
			break ;
		j = 0;
		while (sep[j])
		{
			result[b++] = sep[j];
			j++;
		}
		i++;
	}
	result[b] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		*char_count;
	int		char_count_val;

	if (size <= 0)
	{
		result = "";
		return (result);
	}
	char_count_val = 0;
	char_count = &char_count_val;
	ft_count_size(char_count, strs, sep, size);
	result = malloc(*char_count * sizeof(char));
	helper_func(result, strs, sep, size);
	return (result);
}
