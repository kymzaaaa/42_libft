/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:02:42 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/22 15:07:48 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_all(char **ans)
{
	if (ans)
	{
		while (*ans)
		{
			free(*ans);
			ans++;
		}
		free(*ans);
	}
	return (0);
}

static int	ft_count_size(const char *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			cnt++;
		while (*str && *str != c)
			str++;
	}
	return (cnt);
}

static int	ft_count_next_c(const char *str, char c)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] && str[cnt] != c)
		cnt++;
	return (cnt);
}

static char	*ft_dup_next_c(const char *str, char c)
{
	char	*tmp;
	char	*re;

	tmp = (char *)ft_calloc(ft_count_next_c(str, c) + 1, sizeof(char));
	re = tmp;
	if (tmp == 0)
		return (0);
	while (*str && *str != c)
	{
		*tmp = *str;
		tmp++;
		str++;
	}
	return (re);
}

char	**ft_split(const char *str, char c)
{
	char	**tmp;
	char	**ans;

	if (!str)
		return (0);
	ans = (char **)ft_calloc(ft_count_size(str, c) + 1, sizeof(char *));
	if (ans == 0)
		return (0);
	tmp = ans;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			*ans = ft_dup_next_c(str, c);
			if (*ans == 0)
				return (ft_free_all(tmp));
			ans++;
		}
		while (*str && *str != c)
			str++;
	}
	return (tmp);
}
