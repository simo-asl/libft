/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:20:31 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/17 15:04:11 by mel-asla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int main()
{
	// 1 // 256 // 65536 // 16777216
	int	arr[10] = {0};
	int	i = 0;
	int	c = 1337; // 00000101 00111001
			 //     5         57
	while (i < 10)
	{
		ft_memset(&arr[i], 5, 1);
		printf("arr[%i] = %i\n", i, arr[i]);
		arr[i] <<= 8;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		ft_memset(&arr[i], 57, 1);
                printf("arr[%i] = %i\n", i, arr[i]);
		i++;
	}
	if (c == arr[2])
		printf("CONGRATULATIONS !!!\n");
}*/
