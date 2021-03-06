/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktlili <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 19:32:33 by ktlili            #+#    #+#             */
/*   Updated: 2017/12/05 17:41:08 by ktlili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*to;
	char		*buffer;
	const char	*from;

	to = dst;
	from = src;
	buffer = (char *)malloc(sizeof(char) * (len));
	ft_memcpy(buffer, from, len);
	ft_memcpy(to, buffer, len);
	free(buffer);
	return (dst);
}
