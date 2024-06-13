/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:32:21 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/13 02:51:35 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	int length;
	char * result;

	i = 0;
	while(s[i])
		i++;
	length = i;
	result = (char *)malloc(length * sizeof(char) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while(s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return result;
}

// char f(unsigned int i, char c)
// {
// 	printf("i:%d\n", i);
// 	c = c + 1;
// 	return c;
// }

// int main(void)
// {
// 	char *input = "abcdef";
// 	char *result = ft_strmapi(input, f);
// 	printf("%s\n", result);
// }

