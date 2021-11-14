/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:39:25 by yjoo              #+#    #+#             */
/*   Updated: 2021/11/10 17:39:25 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest == 0 && src == 0)
		return (NULL);
	while (n-- > 0)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (dest);
}
