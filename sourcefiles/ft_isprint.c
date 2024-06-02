/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:35:40 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 13:35:42 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c)
{
	unsigned char	d;

	d = (unsigned char) c;
	if (d >= 32 && d <= 126)
		return (1);
	return (0);
}
