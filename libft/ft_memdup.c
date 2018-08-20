/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:17:26 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/04 20:22:23 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memdup(void *src, size_t n)
{
	char	*fraiche;
	size_t	i;

	i = 0;
	if (!(fraiche = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	while (i < n)
	{
		fraiche[i] = ((char *)src)[i];
		i++;
	}
	return (fraiche);
}
