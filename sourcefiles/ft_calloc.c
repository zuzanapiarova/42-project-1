/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:35:05 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 18:16:34 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

void *ft_calloc(size_t nelem, size_t elsize)
{
	char	*result;
	int size;
	int i;

	i = 0;
	size = nelem * elsize;
	if((int)nelem == INT_MAX || (int)elsize == INT_MAX || (int)nelem == INT_MIN || (int)elsize == INT_MIN)
		return (NULL);
	if (nelem != 0 && elsize > SIZE_MAX / nelem)
		return (NULL);
	result = (char *)malloc(size);
	if(!result)
		return NULL;
	while(i < size)
	{
		result[i] = 0;
		i++;
	}
	return (result);
}
// int main()
// {
// 	ft_calloc(4, 2);
// 	printf("success");
// }
