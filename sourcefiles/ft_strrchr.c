/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:40:48 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/05 22:11:48 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char			*chars;
	char			*result;
	unsigned char	d;

	result = NULL;
	chars = (char *) s;
	d = (unsigned char) c;
	if(d == 0)
		return chars + strlen(chars);
	if (d > 255)
		d %= 255;
	while (*chars)
	{
		if (*chars == d)
			result = chars;
		chars++;
	}
	return (char *) result;
}

// int	main(void)
// {
// 	char s[] = "tripouille";
// 	char s2[] = "ltripouiel";
// 	char s3[] = "";
// 	int c = 353;
// 	printf("%s\n", strrchr(s, 0));
// 	printf("%s\n", ft_strrchr(s, 0));
// }
