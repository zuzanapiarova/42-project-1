/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:23:45 by tomas             #+#    #+#             */
/*   Updated: 2024/05/30 19:16:44 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char *str;
	str = s;

	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
}

void *ft_calloc(size_t nitems, size_t size)
{
	void *ptr;
	size_t n;

	n = nitems * size;

	if(nitems == 0 || size == 0)
		return NULL;
	else
	{
		ptr = malloc(n);
		ft_bzero(ptr, n);
	}
	return (ptr);
}

int main()
{
	ft_calloc(4, 2);
	printf("success");
}
