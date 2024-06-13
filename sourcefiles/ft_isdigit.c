/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:35:32 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/13 01:45:16 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	int result;

	result = 0;
	if (c >= '0' && c <= '9')
		result = 1;
	return (result);
}
