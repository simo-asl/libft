/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:27:23 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/16 13:27:28 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*d;

	total = count * size;
	if (count != (total / size) && size != count)
		return (NULL);
	d = malloc(total);
	if (!d)
		return (NULL);
	ft_memset(d, 0, total);
	return (d);
}
