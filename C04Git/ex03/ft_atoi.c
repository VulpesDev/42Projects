/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:06:18 by tvasilev          #+#    #+#             */
/*   Updated: 2022/06/30 17:14:12 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	worker(char *str, int sign)
{
	while (*str)
	{
		if (*str != ' ')
			break ;
		str++;
	}
	while (*str)
	{
		if (*str != '+' && *str != '-')
			break ;
		else if (*str == '-')
			sign++;
		str++;
	}
}

int	worker2(char *str, int sign, int cur_val, int i)
{
	int	result;

	result = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		cur_val = str[i] - '0';
		result = result * 10 + cur_val;
		i++;
	}
	if (sign % 2 != 0)
		result *= -1;
	return (result);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	cur_val;
	int	i;

	i = 0;
	sign = 0;
	cur_val = 0;
	worker(str, sign);
	return (worker2(str, sign, cur_val, result, i));
}
