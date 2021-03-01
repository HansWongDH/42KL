#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char *str_base;
	char str_cap[30];
	int index;

	str_base = "i WaNt tO bE -rHe V+0rY bE-sT";
	
	index = 0;
	while (index < 30)
	{
		str_cap[index] = str_base[index] + 0;
		index++;
	}
	ft_strcapitalize(&str_cap[0]);
	printf("%s\n",str_cap);
}
