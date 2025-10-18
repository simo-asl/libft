/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:24:41 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/18 10:39:42 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_lentrim(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (ft_check(s1[i], s2))
		i++;
	len = ft_strlen(s1);
	if (len == 0 || len == i)
		return (0);
	len--;
	while (ft_check(s1[len], s2))
		len--;
	return (len - i + 1);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	i;
	char	*d;
	size_t	len;
	size_t	j;

	if (!s1 || !s2)
		return (ft_strdup(""));
	i = 0;
	j = 0;
	len = ft_lentrim(s1, s2);
	if (len == 0)
		return (ft_strdup(""));
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	while (ft_check(s1[i], s2))
		i++;
	while (j < len && s1[i + j])
	{
		d[j] = s1[i + j];
		j++;
	}
	d[j] = '\0';
	return (d);
}
