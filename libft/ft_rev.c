/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:09:10 by carmenia          #+#    #+#             */
/*   Updated: 2017/12/05 15:35:15 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rev(char *str)
{
	char	*temp;
	int		j;
	int		i;

	temp = (char *)malloc(sizeof(char *) * (ft_strlen(str) + 1));
	j = ft_strlen(str) - 1;
	i = 0;
	while (j >= 0)
	{
		temp[i] = str[j];
		i++;
		j--;
	}
	temp[i] = '\0';
	return (temp);
}
