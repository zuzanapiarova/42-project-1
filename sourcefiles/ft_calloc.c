/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:23:45 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 12:59:57 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	unsigned char *byte;
	void *ptr;
	size_t i;

	i = 0;
	total = nmemb + size;
	ptr = malloc(total);
	if (ptr != NULL)
	{
		byte = (unsigned char *)ptr;
		while (total > i)
		{
			byte[i] = 0;
			i++;
		}
	}
	return (ptr);
}
