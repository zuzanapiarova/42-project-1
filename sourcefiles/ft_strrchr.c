/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:40:48 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/02 13:44:20 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char			*rs;
	char			*mid;
	//int				i;
	unsigned char	d;

	rs = (char *) s;
	d = (unsigned char) c;
	if (d > 255)
		d %= 255;
	//i = 0;
	while (*rs || (*rs == '\0' && *rs == d))
	{
		if (*rs == '\0')
			return (rs);
		if (*rs == d)
			mid = rs;
		rs++;
	}
	if (*mid == d)
		return (mid);
	else
		return (0);
}

// int	main(void)
// {
// 	const char	*s1 = "abcdeadf";
// 	const char	*s2 = "abcdeadf";
// 	int c = 353;
// 	printf("%s\n", strrchr(s1, c));
// 	printf("%s\n", ft_strrchr(s2, c));
// }
