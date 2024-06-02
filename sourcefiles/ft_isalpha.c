/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:35:18 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 13:35:20 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	unsigned char	d;

	d = (unsigned char) c;
	if ((d >= 65 && d <= 90) || (d >= 97 && d <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha(57));
// 	printf("%d\n", isalpha(57));
// }
