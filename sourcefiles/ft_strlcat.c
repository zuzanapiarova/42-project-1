/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:35:16 by tomas             #+#    #+#             */
/*   Updated: 2024/05/31 16:41:49 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size) // "abc", "def", 7 --> "abcdef\0"\0
{
	int result;

	while(*dst)
		dst++;
		result
	while (*src != '\0' && size > 0)
	{
			*dst = *src;
			src++;
			size--;
			dst++;
	}
	*dst = '\0';
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
