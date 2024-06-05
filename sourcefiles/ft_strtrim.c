/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:22:54 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/06 01:10:22 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *get_start(char *s1, char *set)
{
	int i;
	char *start;
	int difference;; //if difference is 1, it means that the character in *s1 does not match no characters from set
	//if a character in set is equal to our *s1 character, we multiply the difference by 0

	start = (char *)s1;
	while(*s1)
	{
		i = 0;
		difference = 1;
		while(set[i])
		{
			if(set[i] ==  *s1)
				difference *= 0;
			i++;
		}
		//printf("%c has difference %d\n", *s1, difference);
		if(difference == 1)
		{
			start = (char *)s1;
			return start;
		}
		s1++;
	}
	return NULL;
}

int get_end_index(char *s1, char *set)
{
	int i;
	int end_index;
	int difference; //if difference is 1, it means that the character in *s1 does not match no characters from set
	//if a character in set is equal to our *s1 character, we multiply difference by 0

	end_index = strlen(s1);
	//printf("end index: %d\n", end_index);
	while(s1[end_index - 1])
	{
		//printf("eeend index: %c\n", s1[end_index - 1]);
		i = 0;
		difference = 1;
		while(set[i])
		{
			if(set[i] ==  s1[end_index - 1])
				difference *= 0;
			i++;
		}
		//printf("%c has difference %d\n", *s1, difference);
		if(difference == 1)
		{
			return end_index;
		}
		end_index--;
	}
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *substring;
	int j;
	char *start = get_start((char *)s1, (char *)set);
	int end_index = get_end_index((char *)start, (char *)set);
	//printf("final end index: %d\n", end_index);

	j = 0;
	if(start == NULL)
	{
		substring = "";
		return substring;
	}
	else
		substring = start;
	substring = (char *)malloc(end_index * sizeof(char));
	while(j < end_index)
	{
		substring[j] = *start;
		j++;
		start++;
	}
	return substring;
}

// int main(void)
// {
// 	char *s1 = "xxx...x..x.";
// 	char *set = "x.";
// 	printf("result: %s\n", ft_strtrim(s1, set));
// }
