/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:38:17 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 13:38:32 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n) // abcdef, A, 4 --> AAAAef
{
	unsigned char	*chars;
	unsigned char	d;
	size_t			i;

	chars = (unsigned char *) s;
	if (c >= 256)
		c -= 256;
	d = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		chars[i] = d;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char			s[50] = "abcdef";
// 	unsigned char	c = 97;
// 	size_t			n = 4;

// 	char	*result1 = ft_memset(s, c, n);
// 	printf("%s\n", result1);
// 	char	*result2 = memset(s, c, n);
// 	printf("%s\n", result2);
// }
