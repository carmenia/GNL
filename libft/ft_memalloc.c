/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:22:23 by carmenia          #+#    #+#             */
/*   Updated: 2017/11/25 13:05:37 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** je ne sais pas comment utiliser cette fonction, est-ce qu'on pourrait me
 ** montrer un exmple?
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = (void *)malloc(size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
