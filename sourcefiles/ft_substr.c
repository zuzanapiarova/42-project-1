/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:15:00 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/05 23:22:04 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substring;
	size_t i;

	i = 0;
	if(len > strlen(s) - start)
		len = strlen(s) - start;
	substring = (char *)malloc(len*sizeof(char));
	if(!substring)
		return NULL;
	while(i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	return substring;
}

// int main(void)
// {
// 	char *s = "1";
// 	int start = 24;
// 	size_t len = 1;
// 	printf("substring: %s", ft_substr(s, start, len));
// }