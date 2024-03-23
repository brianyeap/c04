/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryeap <bryeap@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:36:35 by bryeap            #+#    #+#             */
/*   Updated: 2024/03/23 16:06:05 by bryeap           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int num, int pow)
{
	int	i;

	i = 0;
	while (i < pow)
	{
		num = num * 10;
		i++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	len_num;
	int	cal;

	neg = 0;
	len_num = 0;
	cal = 0;
	i = 0;
	while (str[i] == '-' || str[i] == '+' || str[i] == ' ')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i + len_num] >= '0' && str[i + len_num] <= '9')
		len_num++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		cal = cal + ft_pow(str[i] - '0', len_num-- - 1);
		i++;
	}
	if (neg % 2)
		cal = cal * -1;
	return (cal);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_atoi(" ---+--+2147483648"));
// 	return (0);
// }