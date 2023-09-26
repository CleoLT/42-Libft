#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *string;
	size_t		len;
	int		i;
	int		j;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	string = (char *)malloc(sizeof(char) * len);
	if (string == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		string[i + j] = s2[j];
		j++;
	}
	string [i + j] = '\0';
	return (string);
}
