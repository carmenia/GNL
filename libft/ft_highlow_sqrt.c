/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_highlow_sqrt.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 21:02:24 by carmenia          #+#    #+#             */
/*   Updated: 2018/01/15 12:36:01 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_highlow_sqrt(int n, char *highlow)
{
	int	i;

	i = 0;
	while (i * i < n)
		i++;
	if (i * i == n)
		return (i);
	else if (ft_strcmp(highlow, "high") == 0)
		return (i);
	else if (ft_strcmp(highlow, "low") == 0)
		return (i - 1);
	return (0);
}
