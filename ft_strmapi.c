/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:29:18 by yjoo              #+#    #+#             */
/*   Updated: 2021/11/17 21:34:26 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*f_str;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	f_str = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!f_str)
		return (NULL);
	while (i < s_len)
	{
		f_str[i] = f(i, s[i]);
		i++;
	}
	f_str[i] = 0;
	return (f_str);
}
