/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 01:52:48 by jpascal           #+#    #+#             */
/*   Updated: 2016/11/16 06:04:03 by jpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*s1;
	const char		*s2;

	i = 0;
	s1 = dst;
	s2 = src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return((char*)dst + i);
}
