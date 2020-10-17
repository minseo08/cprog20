#include <stdio.h>

int mul_3(int a)
{
		if (a<=9)
		{
				printf("%d\n",3*a);
				return mul_3(a+1);
		}
}

int main()
{
		mul_3(1);
}
