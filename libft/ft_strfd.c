/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 12:43:07 by carmenia          #+#    #+#             */
/*   Updated: 2018/01/15 15:30:40 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfd(char *file)
{
	int		size;
	int		fd;
	char	*str;

	if ((size = ft_sizefd(file)) == -1)
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	if (size == 0)
		return (0);
	if (!(str = (char *)malloc(sizeof(*str) * (size))))
		return (NULL);
	read(fd, str, size);
	str[size] = '\0';
	if (close(fd) == -1)
		return (NULL);
	return (str);
}
