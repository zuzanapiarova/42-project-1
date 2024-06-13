/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:35:40 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/13 01:51:24 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c)
{
	int	result;

	result = 0;
	if (c >= 32 && c <= 126)
		result = 1;
	return (result);
}
