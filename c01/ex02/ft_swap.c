#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int	x;
	int	y;

	x = 5;
	y = 9;
	printf("x = %d | y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("x = %d | y = %d\n", x, y);
}
