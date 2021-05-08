#include "libft.h"
#include <stdio.h>
#include <string.h>


int main()
{
	char *test = malloc(sizeof(char)*10);
	char *test2 = malloc(sizeof(char)*10);
	ft_memset(test, 0, 10);
	ft_memset(test2, 0, 10);
	test2 = "";
	test = "hello";

	int diff;
	diff = ft_strlen(test2);
	printf("%d", diff);
	return 0;
}
