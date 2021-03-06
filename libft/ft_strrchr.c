/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktlili <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:17:29 by ktlili            #+#    #+#             */
/*   Updated: 2017/12/05 17:50:51 by ktlili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char			*ft_strrchr(const char *s, int c)
{
	char	target;
	int		len;

	len = ft_strlen(s);
	target = c;
	while (len >= 0)
	{
		if (s[len] == target)
			return ((char*)&s[len]);
		len--;
	}
	return (NULL);
}
