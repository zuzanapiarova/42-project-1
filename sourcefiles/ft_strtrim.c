/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:22:54 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/06 11:44:29 by zuzanapiaro      ###   ########.fr       */
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
		difference = 1; //set ifference for each character to 1 and as soon as it matches something from set multiply by 0 so it cannot go back
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
	return s1 + strlen(s1); //return pointer to location one after the length of the string - at index i = strlen(s1)
}

int get_end_index(char *s1, char *set)
{
	int i;
	int end_index;
	int difference; //if difference is 1, it means that the character in *s1 does not match no characters from set
	//if a character in set is equal to our *s1 character, we multiply difference by 0

	end_index = strlen(s1);
	//printf("end index: %d\n", end_index);
	while(end_index > 0)
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
			return end_index;
		end_index--;
	}
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *substring;
	int j;
	char *start = get_start((char *)s1, (char *)set);
	printf("start: %s\n", start);
	int end_index = get_end_index((char *)start, (char *)set);
	//printf("final end index: %d\n", end_index);

	if (start == s1 + strlen(s1))
    {
		printf("not found\n");
		substring = (char *)malloc(1);
		if(!substring)
       		return NULL;
		else
			substring[0] = '\0';
		return substring;
    }

	substring = (char *)malloc((end_index + 1) * sizeof(char));
	if(!substring)
		return NULL;
	j = 0;
	while(j < end_index)
	{
		substring[j] = *start;
		j++;
		start++;
	}
	substring[j] = '\0';
	return substring;
}

// int main(void)
// {
// 	char * s = ft_strtrim("   xxx   xxx", " x");
// 	//char *set = "x.";
// 	printf("result: %s\n", s);
// }
