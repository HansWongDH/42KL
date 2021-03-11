#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char *string1;
	char *string2;

	string1 = "HelloO";
	string2 = "HellOo";

	printf("c, %d", strncmp(string1, string2, 5));
	printf("ft, %d", ft_strncmp(string1, string2, 5));
}
