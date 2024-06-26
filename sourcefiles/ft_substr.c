/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:15:00 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/13 01:33:27 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substring;
	unsigned int str_len;
	size_t i;

	i = 0;
	if(s == NULL)
		return NULL;
	str_len = strlen(s);
    if (start >= str_len)
        return ft_strdup("");
	if(len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substring = (char *) malloc((len + 1) * sizeof(char));
	if(!substring)
		return NULL;
	while(i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return substring;
}

// int main(void)
// {
// 	char *s = "1";
// 	int start = 24;
// 	size_t len = 1;
// 	printf("substring: %s", ft_substr(s, start, len));
// }
