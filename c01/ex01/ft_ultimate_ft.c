#include<stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


int	main()
{
	int	a = 50;
	int	*b;
	int	**c;
	int	***d;
	int	****e;
	int	*****f;
	int	******g;
	int	*******h;
	int	********i;
	int     *********j;

	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	j = &i;
	ft_ultimate_ft(j);
	printf("%d", a);
}
