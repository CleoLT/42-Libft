/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 08:19:32 by ale-tron          #+#    #+#             */
/*   Updated: 2023/09/29 13:08:10 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*ptr;

	len = ft_strlen(s1) + 1;
	ptr = (char *)malloc(len * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = (char)s1[i];
		i++;
	}
	return (ptr);
}
