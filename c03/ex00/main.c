#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *string1;
	char *string2;

	string1 = "Hell";
	string2 = "HellO";

	printf("c, %d", strcmp(string1, string2));
	printf("ft, %d", ft_strcmp(string1, string2));
}
