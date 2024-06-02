/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:54:23 by tomas             #+#    #+#             */
/*   Updated: 2024/06/02 19:21:48 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

//1 2 12 13
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if(n == 0)
		return (0);
	while( *s1 && n > 1)
	{
		if(*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// int main(void)
// {
// 	printf("%d\n", ft_strncmp("Tripouille", "tripouille", 42));
// }
