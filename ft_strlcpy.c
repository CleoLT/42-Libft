/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:28:32 by ale-tron          #+#    #+#             */
/*   Updated: 2023/09/20 14:24:06 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (src == NULL)
		return ((size_t)NULL);
	while (src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize - 1] = '\0';
	return (dstsize);
}
