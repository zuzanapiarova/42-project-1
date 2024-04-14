/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:55:46 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 16:01:05 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	// ATOI
	char *str = " -1234";
	printf("atoi: %d\n", atoi(str));
	printf("ft_atoi: %d\n", ft_atoi(str));

	//BZERO
	char s[] = "hello world";
	ft_bzero(s, 2);
	printf("bzero (should be null): %c\n", s[1]); //first 2 characters are set to 0 by ft_bzero, so s[1] will not print anything because it is zero
	printf("bzero (should have value): %c\n", s[6]); //only first 2 characters are set to 0 by ft_bzero, so s[6] will print the 5th value in string s

	//CALLOC
	

	//ISALNUM
	int test = 97;
	printf("isalnum: %d\n", isalnum(test));
	printf("ft_isalnum: %d\n", ft_isalnum(test));

	//ISALPHA
	int test1 = 97;
	printf("isalpha: %d\n", isalpha(test1));
	printf("ft_isalpha: %d\n", ft_isalpha(test1));

	//ISASCII
	int test2 = 97;
	printf("isascii: %d\n", isascii(test2));
	printf("ft_isascii: %d\n", ft_isascii(test2));

	//ISDIGIT
	int test3 = 97;
	printf("isdigit: %d\n", isdigit(test3));
	printf("ft_isdigit: %d\n", ft_isdigit(test3));

	//ISPRINT
	int test4 = 97;
	printf("isprint: %d\n", isprint(test4));
	printf("ft_isprint: %d\n", ft_isprint(test4));




	//TOLOWER
	int test20 = 'A';
	printf("tolower: %c\n", tolower(test20));
	printf("ft_tolower: %c\n", ft_tolower(test20));

	//TOUPPER
	int test21 = 'a';
	printf("toupper: %c\n", toupper(test21));
	printf("ft_toupper: %c\n", ft_toupper(test21));
}
