/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 21:44:00 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 18:43:09 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	//char *result;
	int i;
	int j;

	i = 0;
	j = 0;
	if(*little == '\0')
		return ((char *) big);
	while(big[i] && len > 0)
	{
		if(little[0] == big[i])
		{
			//result = (char *)big + i;
			while(little[j] == big[i])
			{
				i++;
				j++;
			}
		}
		i++;
		len--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *big = "ababcdef";
// 	char *little = "abc";
// 	printf("%s\n", ft_strnstr(big, little, 10));
// }


/* {
	size_t		il;
	size_t		i;
	const char *temp;

	i = 0;
	il = ft_strlen(little);
	printf("%ld\n", il);
	if (*little == '\0')
		return ((char *)big);
	while (*big && (len != 0))
	{
		if (*big == *little)
		{
			i++;
			if (i == 1)
				temp = big;
			little++;
		}
		else if (i == il)
			return ((char *)temp);
		else
			i = 0;
		big++;
	}
	return (NULL);
} */
