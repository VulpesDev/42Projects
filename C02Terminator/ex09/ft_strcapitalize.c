/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:57:02 by tvasilev          #+#    #+#             */
/*   Updated: 2022/06/29 10:47:42 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	not_word_func(char *str, int i, int *in_word, int *first)
{
	if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 48 && str[i] <= 57)
		|| (str[i] >= 97 && str[i] <= 122))
	{
		*in_word = 1;
		*first = 1;
	}
}

void	yes_word_func(char *str, int i, int *in_word, int *first)
{
	if (str[i] >= 65 && str[i] <= 90)
		str[i] += 32;
	else if ((str[i] < 47 || str[i] > 57)
		&& (str[i] < 97 || str[i] > 122))
		*in_word = 0;
	if (str[i] >= 97 && str[i] <= 122 && first)
	{
		str[i] -= str[i];
		*first = 0;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	in_word;
	int	first;

	first = 1;
	in_word = 0;
	i = 0;
	while (str[i])
	{
		if (!in_word)
		{
			not_word_func(str, i, &in_word, &first);
		}
		if (in_word)
		{
			yes_word_func(str, i, &in_word, &first);
		}
		i++;
	}
	return (str);
}
