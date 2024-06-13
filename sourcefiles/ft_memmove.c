/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:37:38 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/13 03:09:09 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*chardest;
// 	unsigned char	*charsrc;
// 	unsigned char	temp[100];

// 	i = 0;
// 	chardest = (unsigned char *) dest;
// 	charsrc = (unsigned char *) src;
// 	while (i < n)
// 	{
// 		temp[i] = charsrc[i];
// 		i++;
// 	}
// 	i = 0;
// 	while (i < n)
// 	{
// 		chardest[i] = temp[i];
// 		i++;
// 	}
// 	return ((void *) dest);
// }

static void	src_cpy(char *pdest, char *psrc, size_t i, size_t n)
{
	if (pdest > psrc)
	{
		while (n != 0)
		{
			n--;
			pdest[n] = psrc[n];
		}
	}
	else
	{
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pdest;
	char	*psrc;
	int		i;

	if (!dest && !src)
		return (NULL);
	pdest = (char *)dest;
	psrc = (char *)src;
	i = 0;
	src_cpy(pdest, psrc, i, n);
	return (pdest);
}
