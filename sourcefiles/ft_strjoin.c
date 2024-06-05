/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:07:03 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/05 23:21:02 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *result;
	int i;
	int length;

	i = 0;
	length = (int)strlen(s1) + (int)strlen(s2);
	result = (char *)malloc(length * sizeof(char));
	if(!result)
		return NULL;
	while(i < (int)strlen(s1))
	{
		result[i] = s1[i];
		i++;
	}
	while(i < ((int)strlen(s1) + (int)strlen(s2)))
	{
		result[i] = s2[i - strlen(s1)];
		i++;
	}
	return result;
}

// int main(void)
// {
// 	char *prefix = "abc";
// 	char *suffix = "123";
// 	printf("result: %s\n", ft_strjoin(prefix, suffix));
// }
