#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	printf("The sum is: %d\t%d", atoi("-2147483648"), ft_atoi("-2147483648"));
	return 0;
}