/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:23:14 by hshields          #+#    #+#             */
/*   Updated: 2021/12/20 12:51:07 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{	
	int	i;

	i = 0;
	while (*str)
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		str++;
		else
		{
			return (0);
		}
	}
	return (1);
}
