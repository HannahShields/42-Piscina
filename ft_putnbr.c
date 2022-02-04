/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:27:32 by hshields          #+#    #+#             */
/*   Updated: 2021/12/16 12:06:55 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(void)
{
	int	i;

	i = 48;
	while (i >= 47 && i <= 57)
		ft_putchar(i++);
	ft_putchar('\n');
}
