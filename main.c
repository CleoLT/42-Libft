
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

char my_func(unsigned int i, char c)
{
	return (c + i);
}

void  my_func2(unsigned int i, char* c)
{
	if (i % 2 == 0)
		write(1, c, 1);
}

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
	char ft_chr[] = "hola buenos dias";
	printf("ft_strchr\na -> %s\n", ft_strchr(ft_chr, 'a'));
	printf("0 -> %s\n", ft_strchr(ft_chr, 0));
	printf("z -> %s\n", ft_strchr(ft_chr, 'z'));
	char chr[] = "hola buenos dias";
	printf("strchr\na -> %s\n", strchr(chr, 'a'));
	printf("0 -> %s\n", strchr(chr, 0));
	printf("z -> %s\n\n", strchr(chr, 'z'));

	printf("ft_strrchr\na -> %s\n", ft_strrchr(ft_chr, 'a'));
	printf("0 -> %s\n", ft_strrchr(ft_chr, 0));
	printf("z -> %s\n", ft_strrchr(ft_chr, 'z'));
	printf("strrchr\na -> %s\n", strrchr(chr, 'a'));
	printf("0 -> %s\n", strrchr(chr, 0));
	printf("z -> %s\n\n", strrchr(chr, 'z'));

	char cmp1[] = "hola buenos dias";
	char cmp2[] = "hola buenos";
	printf("ft_strncmp\n11 -> %d\n", ft_strncmp(cmp1, cmp2, 11));
	printf("5 -> %d\n", ft_strncmp(cmp1, cmp2, 5));
	printf("15 -> %d\n", ft_strncmp(cmp1, cmp2, 15));
	printf("strncmp\n11 -> %d\n", strncmp(cmp1, cmp2, 11));
	printf("5 -> %d\n", strncmp(cmp1, cmp2, 5));
	printf("15 -> %d\n\n", strncmp(cmp1, cmp2, 15));

	printf("ft_memcmp\n%d\n", ft_memcmp("hola\0hola", "hola\0i", 8));
	printf("memcmp\n%d\n\n", memcmp("hola\0hola", "hola\0i", 8));

	printf("ft_strnstr\n%s\n", ft_strnstr("hola buenos dias", "buen", 9));
	printf("strnstr\n%s\n\n", strnstr("hola buenos dias", "buen", 9));

	int *p1 = ft_calloc(0, sizeof(int));
	printf("*p1 = ft_calloc(4, sizeof(int))\np1[0] == %d, p1[1] == %d, p1[2] == %d, p1[3] == %d\n", p1[0], p1[1], p1[2], p1[3]); 
	int *p2 = calloc(0, sizeof(int));
	printf("*p2 = calloc(4, sizeof(int))\np2[0] == %d, p2[1] == %d, p2[2] == %d, p2[3] == %d\n\n", p2[0], p2[1], p2[2], p2[3]); 
	free(p1);
	free(p2);

	char *p3 = ft_strdup(cmp1);
	char *p4 = strdup(cmp1);
	printf("ft_strdup\n%s\n", p3);
	printf("strdup\n%s\n\n", p4);
	free(p3);
    free(p4);

	char *p5 = ft_substr("hola buenos dias", 2, 6);
	char *p6 = ft_substr("hola", 10, 12);
	printf("ft_substr(hola buenos dias, 2, 6)\n%s\n", p5);
	printf("ft_substr('', 2, 6)\n%s\n\n", p6);
   	free(p5);
    free(p6);

	char *p7 = ft_strjoin("hola buenos dias", " bonjour");
    char *p8 = ft_strjoin("hola", "");
    printf("ft_strjoin(hola buenos dias, bonjour)\n%s\n", p7);
    printf("ft_strjoin(hola, '')\n%s\n\n", p8);
    free(p7);
	free(p8);

	char *p9 = ft_strtrim("hola/buenos/dias", "idas");
    char *p10 = ft_strtrim("adios/buenos/dias", "idaso");
    printf("ft_strtrim(hola/buenos/dias, dias)\n%s\n", p9);
    printf("ft_strtrim(adios/buenos/dias, idaso)\n%s\n\n", p10);
    free(p9);
    free(p10);

	char **p11 = ft_split("hola/buenos/dias", '/');
    char **p12 = ft_split("/////hola////buenos/dias////", '/');
	char **p13 = ft_split("////", '/');
	char **p14 = ft_split("hola", ' ');
	char **p15 = ft_split("hola", 0);
    printf("ft_split(hola/buenos/dias, /)\n%s\t%s\t%s\n", p11[0], p11[1], p11[2]);
    printf("ft_split(/////hola////buenos/dias////, /)\n%s\t%s\t%s\t%s\n", p12[0], p12[1], p12[2], p12[3]);
	printf("ft_split(////, /)\n%s\n", p13[0]);
	printf("ft_split(hola, ' ')\n%s\t%s\n", p14[0], p14[1]);
	printf("ft_split(hola, 0)\n%s\t%s\n\n", p15[0], p15[1]);
    free(p11);
    free(p12);
	free(p13);
	free(p14);
	free(p15);

	char *p16 = ft_itoa(423);
	printf("ft_itoa\t%s\t", p16);
	free(p16);
	char *p17 = ft_itoa(-123456);
	printf("%s\t\t", p17);
	free(p17);
	char *p18 = ft_itoa(0);
	printf("%s\t", p18);
	free(p18);
	char *p19 = ft_itoa(-2147483648);
	printf("%s\n\n", p19);
	free(p19);

	char *mapi = "hnj^";
	char *p20 = ft_strmapi(mapi, my_func);
	printf("ft_strmapi('hnj^', f(return c+1)) -> %s\n\n", p20);
	free(p20);

	printf("ft_striteri('h/o/l/a', myfunc2) ->\n");
	char *iteri = "h/o/l/a";
    ft_striteri(iteri, my_func2);
	printf("\n\n");

   	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
    ft_putchar_fd('a', 0);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('a', 2);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("hola", 1);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("hola", 2);

	ft_putnbr_fd(678, 1);
	return (0);
}
