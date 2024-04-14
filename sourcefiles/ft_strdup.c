/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:11:55 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 12:59:57 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *new;
	char *cnew;

	new = (char *)malloc(strlen(s) * (sizeof(char)));
	if (new == NULL)
		return NULL;
	cnew = new;
	while (*s)
	{
		*new = *s;
		new++;
		s++;
	}
	return (cnew);
}

// int main(void)
// {
// 	const char *s = "Hello world";
// 	char *d = ft_strdup(s);

// 	printf("%s\n", d);
// 	return 0;
// }
