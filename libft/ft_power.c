/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:19:32 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/21 16:05:55 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int x, unsigned int n)
{
	if (x <= 0 || n <= 0)
		return (0);
	while (n > 0)
	{
		x = x * x;
		n--;
	}
	if (x < 0 && x % 2 == 1)
		return (-x);
	else
		return (x);
}