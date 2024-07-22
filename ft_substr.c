/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:04:35 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/22 14:57:28 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		s_len;
	size_t		alloc_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	alloc_len = len + 1;
	res = (char *)malloc(alloc_len);
	if (!res)
		return (0);
	ft_strlcpy(res, s + start, alloc_len);
	return (res);
}

// #include <stdio.h>
// int main() {
//     char *s = "Hello, world!";
//     char *substr;
//     substr = ft_substr(s, 7, 5);
//     if (substr) {
//         printf("Substring: %s\n", substr); // "world"
//         free(substr);
//     }
//     substr = ft_substr(s, 0, 5);
//     if (substr) {
//         printf("Substring: %s\n", substr); // "Hello"
//         free(substr);
//     }
//     substr = ft_substr(s, 13, 5);
//     if (substr) {
//         printf("Substring: %s\n", substr); // ""
//         free(substr);
//     }
//     substr = ft_substr(s, 7, 20);
//     if (substr) {
//         printf("Substring: %s\n", substr); // "world!"
//         free(substr);
//     }
//     return 0;
// }