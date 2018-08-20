/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 00:41:11 by carmenia          #+#    #+#             */
/*   Updated: 2017/12/04 19:08:14 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 **comment ca se fait que la fonction prenne un char *s alors qu'on est censes
 **l'appliquer a dees caracteres
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s)
		{
			(*f)(s);
			s++;
		}
	}
}
