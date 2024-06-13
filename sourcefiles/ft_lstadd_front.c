/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:32:31 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/12 12:07:17 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	//Adds the node ’new’ at the beginning of the list
	//lst:  The address of a pointer to the first link of a list.
	// new:  The address of a pointer to the node to be added to the list.
	if(lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
