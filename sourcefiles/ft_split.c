/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:27:10 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/09 16:06:23 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int count_elements(char const *s, char c) //aaa,,,,bbb,ccc
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i] == c) {
        i++;
    }

/* 	while (s[i]) {
        if (s[i] != c) {
            count++;
            while (s[i] != c && s[i] != '\0') {
                i++;
            }
        } else {
            i++;
        }
    } */

    while (s[i]) {
        if (s[i] != c) {
            count++;
            while (s[i] != c && s[i] != '\0') {
                i++;
            }
        } else {
            i++;
        }
    }
    return count;
}

void	free_array(size_t count, char **array)
{
	while (count > 0)
	{
		count--;
		free(*(array + count));
		printf("freed arr at count %zu\n", count);
	}
	free(array);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substring;
	size_t i;

	i = 0;
	if(len > strlen(s) - start)
		len = strlen(s) - start;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if(!substring)
		return NULL;
	while(i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return substring;
}

char **ft_split(char const *s, char c)
{
	char **array;
	int strlen;
	int j;
	int k;
	int count;
	int start_index;
	char * string;

	j = 0;
	k = 0;
	if(*s == 0)
	{
		array = (char **)malloc(sizeof(char));
		array[0] = NULL;
		return array;
	}
	count = count_elements(s, c);
	//printf("count: %d\n", count);
	array = (char **)malloc((count + 1) * sizeof(char *));
	if(!array)
		return NULL;
	while(k < count)
	{
		//printf("k: %d\n", k);
		strlen = 0;
		while(s[j] == c)
			j++;
		start_index = j;
		while(s[j] != c && s[j] != '\0')
			j++;
		strlen = j - start_index;
		if(strlen > 0)
		{
			string = ft_substr(s, start_index, strlen);
			if(!string)
			{
				free_array(k, array);
				return NULL;
			}
			array[k] = string;
		}
		k++;
	}
	array[k] = NULL; //array must end with a NULL pointer
	return array;
}

// int main(void)
// {
// 	char ** result = ft_split(" Tripouille", ' ');

// 	if (result) {
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("result[%d]: '%s'\n", i, result[i]);
//             free(result[i]);
//         }
//         free(result);
//     }
// }

