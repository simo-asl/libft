/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:21:37 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/17 15:01:28 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(long int n)
{
	size_t	len;

	len = 1;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*res;
	long	nb;

	len = 0;
	nb = n;
	if (n < 0)
	{
		len = 1;
		nb *= -1;
	}
	len += ft_count(nb);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len > 0)
	{
		len--;
		res[len] = (nb % 10) + 48;
		nb /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
