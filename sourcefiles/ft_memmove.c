/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:37:38 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 13:38:08 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*chardest;
	unsigned char	*charsrc;
	unsigned char	temp[100];

	i = 0;
	chardest = (unsigned char *) dest;
	charsrc = (unsigned char *) src;
	while (i < n)
	{
		temp[i] = charsrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		chardest[i] = temp[i];
		i++;
	}
	return ((void *) dest);
}

