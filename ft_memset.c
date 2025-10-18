/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-asla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:20:31 by mel-asla          #+#    #+#             */
/*   Updated: 2025/10/18 13:58:19 by mel-asla         ###   ########.fr       */
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
/*#include <stdio.h>
#include <limits.h>
int main()
{
	// 1 // 256 // 65536 // 16777216
	unsigned int	arr[10] = {INT_MIN, INT_MIN, 78, 0,5};
	printf("%u ------<\n", arr[0]);	
	// 00111001 00000101 57 5
	int	i = 1;
	int	rows = 4;
	unsigned char *tmp_arr = (unsigned char *)arr;
	unsigned char *ptr = (unsigned char *)arr;
	while (i < 5)
	{
		int	j = 0;
		while (j < 4)
		{
			ft_memset((tmp_arr + rows) + j, *(ptr + j), 1);
			j++;
		}
		rows += 4;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("arr[%d] => %u\n", i, arr[i]);
		i++;
	}
}*/
