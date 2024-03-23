/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryeap <bryeap@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:38:18 by bryeap            #+#    #+#             */
/*   Updated: 2024/03/23 16:57:04 by bryeap           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	base_len = ft_strlen(base);
	if (nbr > base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
	else
		ft_putchar(base[nbr]);
}

// int main()
// {
//     ft_putnbr_base(42, "01");
//     return (0);
// }