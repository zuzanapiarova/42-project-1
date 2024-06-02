/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:34:51 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 13:34:56 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char	*chars;

	i = 0;
	chars = (unsigned char *) s;
	while (i < n)
	{
		chars[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char s1[20] = "abcdef";
// 	printf("%c\n", s1[2]);
// 	bzero(s1, 3);
// 	printf("%c\n", s1[2]);

// 	char s2[20] = "abcdef";
// 	printf("%c\n", s2[2]);
// 	ft_bzero(s2, 3);
// 	printf("%c\n", s2[2]);
// }
