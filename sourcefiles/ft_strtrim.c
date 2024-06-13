/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 23:22:54 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/13 02:32:17 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// char *get_start(char *s1, char *set)
// {
// 	int i;
// 	char *start;
// 	int difference;; //if difference is 1, it means that the character in *s1 does not match no characters from set
// 	//if a character in set is equal to our *s1 character, we multiply the difference by 0

// 	start = (char *)s1;
// 	while(*s1)
// 	{
// 		i = 0;
// 		difference = 1; //set difference for each character to 1 and as soon as it matches something from set multiply by 0 so it cannot go back
// 		while(set[i])
// 		{
// 			if(set[i] ==  *s1)
// 				difference *= 0;
// 			i++;
// 		}
// 		//printf("%c has difference %d\n", *s1, difference);
// 		if(difference == 1)
// 		{
// 			start = (char *)s1;
// 			return start;
// 		}
// 		s1++;
// 	}
// 	return s1 + strlen(s1); //return pointer to location one after the length of the string - at index i = strlen(s1)
// }

// int get_end_index(char *s1, char *set)
// {
// 	int i;
// 	int end_index;
// 	int difference; //if difference is 1, it means that the character in *s1 does not match no characters from set
// 	//if a character in set is equal to our *s1 character, we multiply difference by 0

// 	end_index = strlen(s1);
// 	//printf("end index: %d\n", end_index);
// 	while(end_index > 0)
// 	{
// 		//printf("eeend index: %c\n", s1[end_index - 1]);
// 		i = 0;
// 		difference = 1;
// 		while(set[i])
// 		{
// 			if(set[i] ==  s1[end_index - 1])
// 				difference *= 0;
// 			i++;
// 		}
// 		//printf("%c has difference %d\n", *s1, difference);
// 		if(difference == 1)
// 			return end_index;
// 		end_index--;
// 	}
// 	return 0;
// }

// char *ft_strtrim(char const *s1, char const *set)
// {
// 	char *substring;
// 	int j;
// 	char *start = get_start((char *)s1, (char *)set);
// 	printf("start: %s\n", start);
// 	int end_index = get_end_index((char *)start, (char *)set);
// 	//printf("final end index: %d\n", end_index);

// 	if (start == s1 + strlen(s1))
//     {
// 		printf("not found\n");
// 		substring = (char *)malloc(1);
// 		if(!substring)
//        		return NULL;
// 		else
// 			substring[0] = '\0';
// 		return substring;
//     }

// 	substring = (char *)malloc((end_index + 1) * sizeof(char));
// 	if(!substring)
// 		return NULL;
// 	j = 0;
// 	while(j < end_index)
// 	{
// 		substring[j] = *start;
// 		j++;
// 		start++;
// 	}
// 	substring[j] = '\0';
// 	return substring;
// }

// int main(void)
// {
// 	char * s = ft_strtrim("   xxx   xxx", " x");
// 	//char *set = "x.";
// 	printf("result: %s\n", s);
// }

static bool	get_set(char const s1, char const *set)
{
	while (*set)
	{
		if (*set == s1)
			return (true);
		set++;
	}
	return (false);
}

static size_t	get_start(char const *s1, char const *set)
{
	int s;

	s = 0;
	while (s1[s])
	{
		if (get_set(s1[s], set) == true)
			s++;
		else
			return (s);
	}
	return (s);
}

static size_t	get_end(char const *s1, char const *set)
{
	int	e;

	e = ft_strlen(s1) - 1;
	while (e > 0)
	{
		if (get_set(s1[e], set) == true)
			e--;
		else
			return (e);
	}
	return (e);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t		s;
	size_t		e;
	size_t		len;
	char		*result;

	s = get_start(s1, set);
	e = get_end(s1, set);
	if (s > e)
		return (ft_strdup(""));
	len = e - s + 1;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	len = 0;
	while (s1[s] && s <= e)
	{
		result[len] = s1[s];
		len++;
		s++;
	}
	result[len] = '\0';
	return (result);
}
