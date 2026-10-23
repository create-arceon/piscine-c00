/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clement-martin <clement-martin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:42:37 by clement-mar       #+#    #+#             */
/*   Updated: 2026/10/23 11:12:47 by clement-mar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('4');
	ft_putchar('2');
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
