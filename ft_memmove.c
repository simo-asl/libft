/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 03:05:19 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/21 07:57:51 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_helper(char *d, const char *s, size_t n)
{
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
}

void	*ft_memmove(void *d, const void *s, size_t n)
{
	char		*dp;
	size_t		i;
	const char	*sp;

	if (!d && !s)
		return (NULL);
	dp = (char *)d;
	sp = (const char *)s;
	i = 0;
	if (s < d && d < s + n)
		ft_helper(dp, sp, n);
	else
	{
		while (i < n)
		{
			dp[i] = sp[i];
			i++;
		}
	}
	return (d);
}
