
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	printf("isalpha\nA->%d\n", ft_isalpha('A'));
	printf("2->%d\n\n", ft_isalpha('2'));
	printf("isdigit\n0->%d\n", ft_isdigit('0'));
	printf("R->%d\n\n", ft_isdigit('R'));
	char b[] = "hola buenos dias";
	printf("memset\nv, 2 -> %s\n", ft_memset(b, 'v', 2));
	char c[] = "hola buenos dias";
	printf("memset de string.h\nv, 2 -> %s\n\n", memset(c, 'v', 2));
	char test[] = "holi";
	ft_bzero(test, 3);
	printf("bzero\n3 -> %s\n", test);
	char test1[] = "holi";
	bzero(test1, 3);
	printf("bzero de string.h\n3 -> %s\n\n", test1);
	char ft_mc[] = "hola buenos dias";
	char src[] = "bonjour";
	printf("ft_memcpy\n4 -> %s\n", ft_memcpy(ft_mc, src, 4));
	char mc[] = "hola buenos dias";
	printf("memcpy\n4 -> %s\n\n", memcpy(mc, src, 4));
	char ft_mmc[] = "hola buenos dias";
	printf("ft_memcpy\n4 -> %s\n", ft_memmove(ft_mmc, ft_mmc + 3, 10));
	char mmc[] = "hola buenos dias";
	printf("memcpy\n4 -> %s\n\n", memmove(mmc, mmc + 3, 10));




	return (0);
}
