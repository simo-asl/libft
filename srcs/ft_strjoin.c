/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:56:12 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/17 15:03:02 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy(char *d, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	return (d + i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	char	*p;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	p = d;
	p = ft_copy(p, s1);
	p = ft_copy(p, s2);
	*p = '\0';
	return (d);
}
