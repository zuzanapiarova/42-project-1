/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 14:35:00 by tomas             #+#    #+#             */
/*   Updated: 2024/06/02 19:56:24 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if(size == 0)
		return (strlen(src));
	while(src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (strlen(src));
}

// int main(void)
// {
// 	char src[] = "coucou";
// 	char dest[10];
// 	memset(dest, 'A', 10);
// 	printf("%ld\n", ft_strlcpy(dest, src, 2));
// 	printf("%c\n", dest[0]);
// 	printf("%c\n", dest[1]);
// 	printf("%c\n", dest[2]);
// 	printf("%c\n", dest[3]);
// 	printf("%c\n", dest[4]);
// 	printf("%c\n", dest[5]);
// 	printf("%c\n", dest[6]);
// 	printf("%c\n", dest[7]);
// 	printf("%d\n", !strcmp(src, dest));
// }
