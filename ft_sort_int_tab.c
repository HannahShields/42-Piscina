/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:01:07 by hshields          #+#    #+#             */
/*   Updated: 2021/12/15 23:10:31 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	swap;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size -1)
		{
			if (tab[b] > tab[b + 1])
			{
				swap = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = swap;
			}
			b++;
		}
		a++;
	}
}	
