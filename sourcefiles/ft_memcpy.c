/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:36:31 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 13:39:33 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
//*......,*abcdef,4-->*abcd..
{
	int		i;
	char	*chardest;
	char	*charsrc;

	i = 0;
	chardest = (char *) dest;
	charsrc = (char *) src;
	while (n > 0)
	{
		chardest[i] = charsrc[i];
		i++;
		n--;
	}
	return ((void *) dest);
}

// int	main(void)
// {
// 	char dest1[] = "AAAAAAA";
// 	char dest2[] = "AAAAAAA";
// 	char src1[] = {0, 0};
// 	char src2[] = {0, 0};
// 	ft_memcpy(dest1, src1, 2);
// 	memcpy(dest2, src2, 2);
// 	printf("%c\n", dest1[1]);
// 	printf("%c\n", dest2[1]);
// }
