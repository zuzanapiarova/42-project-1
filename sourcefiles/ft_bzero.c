/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:13:27 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 15:16:19 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <libc.h>

void ft_bzero(void *s, size_t n)
{
	char *str;
	str = s;

	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
}

/* int main(void)
{
	//bzero can be defines as:
		// unsigned char	*str;
		// str = (unsigned char*)s;
	// instead of ordinary char, but why?????

	char s[] = "hello world";
	ft_bzero(s, 2);
	printf("bzero (should be null): %c\n", s[1]); //first 2 characters are set to 0 by ft_bzero, so s[1] will not print anything because it is zero
	printf("bzero (should have value): %c\n", s[6]); //only first 2 characters are set to 0 by ft_bzero, so s[6] will print the 5th value in string s
} */
