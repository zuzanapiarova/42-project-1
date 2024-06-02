/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:35:47 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 13:35:49 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*chars;
	unsigned char	d;

	chars = (unsigned char *) s;
	d = (unsigned char) c;
	if (d > 255)
		d %= 255;
	while (n > 0)
	{
		if (*chars == d)
			return ((void *) chars);
		chars++;
		n--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = "abcdef";
// 	unsigned int c = 98;
// 	char *result1 = memchr(s, c, 2);
// 	char *result2 = ft_memchr(s, c, 2);
// 	printf("%s\n", result1);
// 	printf("%s\n", result2);
// }
