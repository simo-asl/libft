/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 03:05:19 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/21 07:42:11 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	{
		while (n > 0)
		{
			n--;
			dp[n] = sp[n];
		}
	}
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
