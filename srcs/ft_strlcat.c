/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:21:20 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/14 02:34:50 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = ft_strlen(d);
	s_len = ft_strlen(s);
	if (size <= d_len)
		return (size + s_len);
	while (s[i] && (d_len + i) < size - 1)
	{
		d[i + d_len] = s[i];
		i++;
	}
	d[i + d_len] = '\0';
	return (s_len + d_len);
}
