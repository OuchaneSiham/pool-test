#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}

int	main()
{
	int a;
	int b;
	a = 78;
	b = 10;
	ft_ultimate_div_mod(&a,&b);
	printf("%d %d\n",a,b);
}	
