#include <stdio.h>
int get_sum(int x,int y)
{
		return x+y;
}
int get_diff(int x,int y)
{
		return x-y;
}
int get_mul(int x,int y)
{
		return x*y;
}
float get_div(int x, int y)
{
		return x/y;
}

int main()
{
		int a,b;
		printf("Type two integers:");
		scanf("%d %d",&a,&b);

		printf("sum=%d\n",get_sum(a,b));
		printf("diff=%d\n",get_diff(a,b));
		printf("mul=%d\n",get_mul(a,b));
		printf("div=%f\n",get_div(a,b));

		return 0;
}
