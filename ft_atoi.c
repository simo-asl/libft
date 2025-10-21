/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:54:34 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/20 08:17:43 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(long r, int d, long sign)
{
	if (sign == 1)
	{
		if (r > (9223372036854775807 - d) / 10)
			return (-1);
	}
	else
	{
		if (r > (9223372036854775807 - d) / 10)
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *s)
{
	size_t	i;
	long	sign;
	long	res;
	int		ret;

	i = 0;
	res = 0;
	sign = 1;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		ret = ft_check(res, s[i] - 48, sign);
		if (ret != 1)
			return (ret);
		res = res * 10 + (s[i] - 48);
		i++;
	}
	return ((int)(res * sign));
}
