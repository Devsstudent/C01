#include "main.h"
#include <stdio.h>

int	main(void)
{
	int forty_two = 47;
	int *ptr = &forty_two;
	ft_ft(ptr);
	printf("%i", *ptr);
	return 1;
}
