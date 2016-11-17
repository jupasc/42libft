/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:47:13 by jpascal           #+#    #+#             */
/*   Updated: 2016/11/16 01:30:11 by jpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t			i;
	unsigned int	index;

	index = 0;
	i = 0;
	if (dest[i] == '\0' && src[index] == '\0')
		return (0);
	i = ft_strlen(dest);
	while (src[index] != '\0' && index < n)
	{
		dest[i + index] = src[index];
		index++;
	}
	return(ft_strlen(dest) + 1);
}
