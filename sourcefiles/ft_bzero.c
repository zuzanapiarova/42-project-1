/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:13:27 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 15:46:39 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <libc.h>

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
