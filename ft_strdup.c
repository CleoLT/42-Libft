#include "libft.h"

char	*ft_strdup(const char *s)

{

	char	*new;

	size_t	len;

	len = ft_strlen(s) + 1;

	new = (char *)malloc(sizeof(*new) * len);

	if (!new)

		return (NULL);

	return ((char *)ft_memcpy(new, s, len));

}
