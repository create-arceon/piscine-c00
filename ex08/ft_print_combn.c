/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-martin <clement-martin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:35:12 by clement-mar       #+#    #+#             */
/*   Updated: 2026/10/23 11:40:34 by clement-mar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	ft_print_combn(3);
	return (0);
}

void	ft_print_combn(int n)
{
	char	number[10];
	int		i;

	i = 0;
	while (i < n)
	{
		number[i] = '0' + i;
		i++;
	}
	while (number[0] <= '9' - n + 1)
	{
		write(1, number, n);
		if (number[0] != '9' - n + 1)
			write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && number[i] == '9' - (n - 1 - i))
			i--;
		if (i < 0)
			break ;
		{
			number[i]++;
			while (++i < n)
				number[i] = number[i - 1] + 1;
		}
	}
}
