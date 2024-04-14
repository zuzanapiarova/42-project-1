/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:48:06 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 12:59:57 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char* pDest;
	const char* pSrc;

	pDest = dest;
	pSrc = src;
	if (!dest && !src)
		return (NULL);
	while (*pSrc && n != 0)
	{
		*(pDest++) = *pSrc++;
		n--;
	}
	return (dest);
}
