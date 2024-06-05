/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:35:16 by tomas             #+#    #+#             */
/*   Updated: 2024/06/04 17:06:34 by zuzanapiaro      ###   ########.fr       */
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
	size_t free_space;

	dest_size = strlen(dst);
	i = dest_size;
	src_size = strlen(src);
	j = 0;

	if(size == 0)
	{
		printf("printing 0\n");
		dst[dest_size] = '\0';
		return src_size;
	}
	else if(size < dest_size)
	{
		printf("printing 1\n");
		dst[size] = '\0';
		return size + src_size;
	}
	else if(size == 1)
	{
		printf("printing 2\n");
		return (src_size);
	}
	else if(size == 1 && dst[0] == 0)
	{
		printf("printing 3\n");
		dst[0] = '\0';
		return src_size;
	}
	if(size > dest_size + src_size + 1)
		free_space = size - dest_size - src_size - 1;
	else
		free_space = size - dest_size - 1;
	while(src[j] && free_space)
	{
			dst[i] = src[j];
			i++;
			j++;
			free_space--;
	}
	printf("printing 4\n");
	dst[i] = '\0';
	return dest_size + src_size;
}

// int main(void)
// {
// 	char dest[30];
// 	//memset(dest, 0, 30);
// 	dest[0] = 'B';
// 	//memset(dest, 'B', 4);
// 	char * src = (char *)"AAAAAAAAA";
// 	//dest[0] = 'B';
// 	printf("%s", dest);
// 	printf("my func: %ld\n", ft_strlcat(dest, "123", 0));
// 	printf("%s", dest);
// 	return(0);
// }

	// memset(dest, 0, 30);
	//////////// /* 17 */ check(ft_strlcat(dest, "123", 0) == 3 && !strcmp(dest, "")); showLeaks();
	// dest[0] = 'B';
	////////////// /* 2 */ check(ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B")); showLeaks();

	// /* 1 */ check(ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B")); showLeaks();
	// memset(dest, 'B', 4);
	// /* 3 */ check(ft_strlcat(dest, src, 3) == 3 + strlen(src) && !strcmp(dest, "BBBB")); showLeaks();
	// /* 4 */ check(ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA")); showLeaks();
	// if(size > dest_size && size < dest_size + src_size)

	// memset(dest, 'C', 5);
	// /* 5 */ check(ft_strlcat(dest, src, -1) == 14 && !strcmp(dest, "CCCCCAAAAAAAAA")); showLeaks();
	// memset(dest, 'C', 15);
	// /* 6 */ check(ft_strlcat(dest, src, 17) == 24 && !strcmp(dest, "CCCCCCCCCCCCCCCA")); showLeaks();
	// memset(dest, 0, 30);
	////////////
	//* 7 */ check(ft_strlcat(dest, src, 1) == strlen(src) && !strcmp(dest, "")); showLeaks();
	// memset(dest, 0, 30); memset(dest, '1', 10);
	// /* 8 */ check(ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111")); showLeaks();
	// memset(dest, 0, 30); memset(dest, '1', 10);
	// /* 9 */ check(ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111")); showLeaks();
	// memset(dest, 0, 30); memset(dest, '1', 10);
	// /* 10 */ check(ft_strlcat(dest, "", 15) == 10 && !strcmp(dest, "1111111111")); showLeaks();
	// memset(dest, 0, 30);
	// /* 11 */ check(ft_strlcat(dest, "", 42) == 0 && !strcmp(dest, "")); showLeaks();
	// memset(dest, 0, 30);
	// /* 12 */ check(ft_strlcat(dest, "", 0) == 0 && !strcmp(dest, "")); showLeaks();
	// memset(dest, 0, 30);
	/////////// /* 13 */ check(ft_strlcat(dest, "123", 1) == 3 && !strcmp(dest, "")); showLeaks();
	// memset(dest, 0, 30);
	// /* 14 */ check(ft_strlcat(dest, "123", 2) == 3 && !strcmp(dest, "1")); showLeaks();
	// memset(dest, 0, 30);
	// /* 15 */ check(ft_strlcat(dest, "123", 3) == 3 && !strcmp(dest, "12")); showLeaks();
	// memset(dest, 0, 30);
	// /* 16 */ check(ft_strlcat(dest, "123", 4) == 3 && !strcmp(dest, "123")); showLeaks();
	// write(1, "\n", 1);
