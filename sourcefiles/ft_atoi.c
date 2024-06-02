/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:54:52 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/04/14 15:59:09 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	r;

	sign = 1;
	r = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if(*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while ((*nptr >= '0') && (*nptr <= '9'))
	{
		r = r * 10 + (*nptr - '0');
		nptr++;
	}
	return (r * sign);
}
