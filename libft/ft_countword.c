/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 12:52:30 by rmiralle          #+#    #+#             */
/*   Updated: 2017/12/06 17:22:14 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countword(char *s, char c)
{
	int	i;
	int	drapeau;
	int	mot;

	i = 0;
	mot = 0;
	drapeau = 0;
	while (s[i])
	{
		if (s[i] == c)
			drapeau = 0;
		if (s[i] != c && drapeau == 0)
		{
			mot++;
			drapeau = 1;
		}
		i++;
	}
	return (mot);
}
