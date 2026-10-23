/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-martin <clement-martin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 11:00:27 by clement-mar       #+#    #+#             */
/*   Updated: 2026/10/23 11:30:27 by clement-mar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	first[2];
	char	second[2];

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			first[0] = (a / 10) + '0';
			first[1] = (a % 10) + '0';
			second[0] = (b / 10) + '0';
			second[1] = (b % 10) + '0';
			write(1, first, 2);
			write(1, " ", 1);
			write(1, second, 2);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
