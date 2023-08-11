#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b ;
	*mod = a % b ;

}

int	main()
{
	int a ;
	int b ;
	int div ;
	int mod ;


	ft_div_mod(56,10,&div,&mod);
	printf("%d %d\n",div,mod);


}
