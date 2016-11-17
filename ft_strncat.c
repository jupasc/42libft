/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:47:13 by jpascal           #+#    #+#             */
/*   Updated: 2016/11/16 00:43:29 by jpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int				i;
	unsigned int	index;

	i = 0;
	index = 0;
	if (dest[i] == '\0' && src[index] == '\0')
		return (0);
	while (dest[i] != '\0')
		i++;
	while (src[index] != '\0' && index < n)
	{
		dest[i] = src[index];
		i++;
		index++;
	}
	dest[i] = '\0';
	return (dest);
}
