/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:52:38 by carmenia          #+#    #+#             */
/*   Updated: 2017/12/04 22:08:52 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *des, const void *src, int c, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *)des++ = *(unsigned char *)src;
		if (*(unsigned char *)src++ == (unsigned char)c)
			return (des);
		n--;
	}
	return (NULL);
}
