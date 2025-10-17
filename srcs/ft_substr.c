/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:36:08 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/17 15:48:47 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*d;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_stlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	d = malloc(len + 1);
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
