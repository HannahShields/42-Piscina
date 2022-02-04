/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:48:08 by hshields          #+#    #+#             */
/*   Updated: 2021/12/20 12:55:27 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{	
		if ((str[i] >= 'a' && str[i] <= 'z'))
		str++;
		else
		{
			return (0);
		}
	}
	return (1);
}
