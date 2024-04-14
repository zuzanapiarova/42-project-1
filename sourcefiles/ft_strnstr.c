/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:21:50 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 12:59:57 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		il;
	size_t		i;
	const char *temp;

	i = 0;
	il = ft_strlen(little);
	printf("%ld\n", il);
	if (*little == '\0')
		return ((char *)big);
	while (*big && (len != 0))
	{
		if (*big == *little)
		{
			i++;
			if (i == 1)
				temp = big;
			little++;
		}
		else if (i == il)
			return ((char *)temp);
		else
			i = 0;
		big++;
	}
	return (NULL);
}
