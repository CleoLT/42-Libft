
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
	char ft_mmc1[] = "hola buenos dias";
	printf("ft_memmove\ndst + 4, dst, 10 -> %s\n", ft_memmove(ft_mmc + 4, ft_mmc, 10));
	printf("dst, dst + 3, 10 -> %s\n", ft_memmove(ft_mmc1, ft_mmc1 + 3, 10));
	char mmc[] = "hola buenos dias";
	printf("memmove\ndst + 4, dst, 10 -> %s\n", memmove(mmc + 4, mmc, 10));
	char mmc1[] = "hola buenos dias";
	printf("dst, dst + 3, 10 -> %s\n\n", memmove(mmc1, mmc1 + 3, 10));

	char ft_dcpy[] = "hola buenos dias";
	char ft_scpy[] = "bonjour";
	printf("ft_strlcpy\nreturn -> %lu\n", ft_strlcpy(ft_dcpy, ft_scpy, 7));
	printf("dest -> %s\n", ft_dcpy);
	char dcpy[] = "hola buenos dias";
	char scpy[] = "bonjour";
	printf("strlcpy\nreturn -> %lu\n", strlcpy(dcpy, scpy, 7));
	printf("dest -> %s\n\n", dcpy);
	return (0);
}
