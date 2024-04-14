/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:36:48 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 13:39:01 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(const char *s, int c)
{
	const char *d;

	// d = '\0';
	// if (c == '\0')
	// 	return ((char *)d);
	while (*s)
	{
		d = s;
		if (c == *s)
			return ((char *)d);
		s++;
	}
	return (NULL);
}
