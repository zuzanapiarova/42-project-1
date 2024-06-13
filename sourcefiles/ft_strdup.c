/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:11:55 by tomas             #+#    #+#             */
/*   Updated: 2024/06/13 01:56:09 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int len;
	char *copy;
	int i;

	i = 0;
	len = ft_strlen(s1);
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while(s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}


// int main(void)
// {
// 	const char *s = "Hello world";
// 	char *d = ft_strdup(s);

// 	printf("%s\n", d);
// 	return 0;
// }

/* char *ft_strdup(const char *s)
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
} */
