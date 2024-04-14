/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 14:35:00 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 13:34:10 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	if (size == 0)
		return (ft_strlen(src));
	while (*src & (size != 0))
	{
		*dest = *src;
		src++;
		dest++;
		size--;
	}
	dest++;
	*dest = '\0';
	return (ft_strlen(src));
}
