/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:12:54 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/17 16:21:42 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 1;
	while (s[i] && s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}	

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	count;
	size_t	i;

	if (!s)
		return (ft_strdup(""));
	i = 0;
}
