/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:09:03 by tomas             #+#    #+#             */
/*   Updated: 2024/05/31 14:29:55 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)  // abcde, c, 4 --> *cde
{
	const char *ps;
	unsigned char d;

	if(c >= 256)
		c -= 256;
	ps = (const char *) s;
	d = (unsigned char)c;

	while(*ps >= 0 && n != 0)
	{
		//printf("char: %c, memory location: %p\n", *ps, &ps); // memory location ps sa nemeni ajked incrementujeme ps++ ?!!??!?!?
		if(*ps == d)
			return ((void *)ps);
		else
			//printf("not equal\n");
		ps++;
		n--;
	}
	return (NULL);
}
