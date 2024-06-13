/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:32:09 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/13 00:43:15 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list *result;
	result = (t_list *)malloc(sizeof(t_list));
	if(!result)
		return NULL;
	if (content == 0)
	{
		result->content = 0;
		result->next = 0;
	}
	else
	{
		result->content = content;
		result->next = NULL;
	}
	return result;
}

//all works great, some problem at compilation


// int main(void)
// {
//     char *content = "Hello, world!";
//     t_list *node = ft_lstnew(content);

//     if (node)
//     {
//         printf("Node content: %s\n", (char *)node->content);
//         free(node);
//     }
//     else
//     {
//         printf("Failed to create a new node.\n");
//     }

//     return 0;
// }
