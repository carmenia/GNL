/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:08:00 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/21 16:21:40 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*des;

	i = 0;
	while (s1[i])
		i++;
	des = (char *)malloc(sizeof(*s1) * (i + 1));
	if (des == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		des[i] = s1[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
