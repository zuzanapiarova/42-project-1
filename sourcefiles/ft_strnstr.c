/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuzanapiarova <zuzanapiarova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 21:44:00 by zuzanapiaro       #+#    #+#             */
/*   Updated: 2024/06/13 03:14:53 by zuzanapiaro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
	size_t i;
    size_t needle_len;

	i = 0;
    needle_len = ft_strlen(needle);
    if (*needle == '\0')
        return ((char *)haystack);
	while(i <= len)
    {
        // Ensure not to go past the end of haystack
        if (needle_len + i > len)
            return NULL;

        // Check if needle matches the substring starting at position i
        if (ft_strncmp(haystack + i, needle, needle_len) == 0)
            return (char *)(haystack + i);

        // Stop if we've reached the end of haystack
        if (haystack[i] == '\0')
            return NULL;
		i++;
    }
	return NULL;
}

// int main(void)
// {
// 	char haystack[30] = "aaaabcaaaaaabcd";
// 	char needle[10] = "abc";
// 	printf("%s\n", ft_strnstr(haystack, needle, 10));
// }
