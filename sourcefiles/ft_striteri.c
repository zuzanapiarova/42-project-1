/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:07:01 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/10 19:32:19 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdlib.h>
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char *dup;
	int i;

	dup = s;
	i = 0;
	while(*dup)
	{
		f(i, dup);
		i++;
		dup++;
	}
}
