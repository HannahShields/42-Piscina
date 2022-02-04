/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:36:44 by hshields          #+#    #+#             */
/*   Updated: 2021/12/09 15:46:39 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert(int numb)
{
	int	first;
	int	second;

	if (numb <= 9)
	{
		ft_putchar('0');
		ft_putchar(numb + 48);
	}
	else
	{
		first = numb / 10;
		second = numb % 10;
		ft_putchar(first + 48);
		ft_putchar(second + 48);
	}
}

void	ft_print_comb2(void)

{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			convert(a);
			ft_putchar(' ');
			convert(b);
			if (a != 98 || b != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
