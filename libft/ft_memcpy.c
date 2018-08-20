/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:50:09 by carmenia          #+#    #+#             */
/*   Updated: 2017/12/04 22:08:30 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t n)
{
	unsigned char	*des1;
	unsigned char	*src1;
	size_t			i;

	des1 = (unsigned char *)des;
	src1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		des1[i] = src1[i];
		i++;
	}
	return (des);
}
