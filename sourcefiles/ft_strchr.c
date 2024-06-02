/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:38:52 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 13:38:54 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char			*res;
	unsigned char	d;

	d = (unsigned char) c;
	res = (char *) s;
	while (*res || (*res == '\0' && *res == d))
	{
		if (*res == d )
			return (res);
		res++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char *s = "abcdef";
// 	int c = 0;
// 	printf("%s\n", strchr(s, c));
// 	printf("%s\n", ft_strchr(s, c));
// }
