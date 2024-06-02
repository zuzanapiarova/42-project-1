/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:35:16 by tomas             #+#    #+#             */
/*   Updated: 2024/06/02 14:01:08 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dest_size;
	size_t src_size;

	i = 1;
	j = 0;
	while(dst[i] != '\0')
	{
		i++;
	}
	dest_size = i;
	while(src[j] && j <= size - dest_size)
	{
		dst[i] = src[i];
		i++;
		j++;
	}
	src_size = j;
	if(size == 0)
	{
		return src_size;
	}
	if(dest_size >= size)
	{
		dst[size] = '\0';
		return (dest_size + size);
	}
	dst[i] = '\0';
	return dest_size + src_size;
}
/* int main(void)
{
	char *src = "World";
	char dest[20] = "Hello ";
	unsigned int size = 3;
	printf("my func: %s\n", ft_strncat(dest, src, size));
	//printf("strcat: %s\n", strncat(dest, src, size));
	return(0);
} */
