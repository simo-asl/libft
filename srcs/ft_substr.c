/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:36:08 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/16 13:56:33 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_bustr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*d;

	i = 0;
	len = ft_stlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	d = malloc(len);
	if (!d)
		return (NULL);
	while (s[start + i] && start + i < len)
	{
		d[i] = s[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
