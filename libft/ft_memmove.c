/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:54:14 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/21 20:30:55 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t n)
{
	unsigned char	*des1;
	unsigned char	*src1;
	size_t			i;

	des1 = (unsigned char *)des;
	src1 = (unsigned char *)src;
	i = 0;
	if (des < src)
	{
		while (i < n)
		{
			des1[i] = src1[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			des1[n] = src1[n];
	}
	return (des);
}
