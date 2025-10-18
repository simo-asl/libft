/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:40:42 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/14 03:15:03 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t		i;
	char		*pd;
	const char	*ps;

	pd = (char *)d;
	ps = (const char *)s;
	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (d);
}
