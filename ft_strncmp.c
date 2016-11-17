/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:29:02 by jpascal           #+#    #+#             */
/*   Updated: 2016/11/14 18:55:34 by jpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				nb;

	i = 0;
	nb = 0;
	if (s1[i] == 0 && s2[i] == 0)
		return (0);
	while (s1[i] == s2[i] && ((s1[i] != '\0' && s2[i] != '\0')
				|| i <= n))
		i++;
	nb = s1[i] - s2[i];
	return (nb);
}
