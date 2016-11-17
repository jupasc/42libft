/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 01:52:48 by jpascal           #+#    #+#             */
/*   Updated: 2016/11/17 06:40:53 by jpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*s1;
	const char		*s2;

	i = 0;
	s1 = dst;
	s2 = src;
	while (i < n && s2[i] != (unsigned char)c)
	{
		s1[i] = s2[i];
		i++;
	}
	if (s2[i] == (unsigned char)c)
		return (s1 + i);
	else
		return (0);
}
