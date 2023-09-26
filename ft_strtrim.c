#include "libft.h"
#include <stdio.h>

char	*reverse(char *str)
{
	int	i;
	int	j;
	char	temp;
	int	len;
	
	len = ft_strlen(str);
	i = 0;
	j = len - 1;
	while (str[i] && i < len / 2)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int	cmp;
	int	cmprev;
	size_t	len;
	char	*s1rev;
	char	*setrev;

	s1rev = reverse(ft_strdup((char *)s1));
	setrev = reverse(ft_strdup((char *)set));
	cmp = ft_strncmp(s1, set, ft_strlen(set));
	cmprev = ft_strncmp(s1rev, setrev, ft_strlen(set));
	printf("%d, %d", cmp, cmprev);
	if (cmp != 0 && cmprev != 0)
		return (NULL);
	if (cmp == 0 || cmprev == 0)
		len = ft_strlen(s1) - ft_strlen(set) + 1;
	new = (char *)malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	if (cmp == 0)
		new = (char *)s1 + ft_strlen(set);
	if (cmprev == 0)
		new = reverse(s1rev + ft_strlen(set));
//	free(s1rev);
//	free(setrev);
	return (new);
}
