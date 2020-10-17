#include <stdio.h>

long factorial(int n)
{
		if(n<=1) return 1;
		else return n*factorial(n-1);
}

int main()
{
		int x=0;
		long n;

		printf("정수를 입력하시오:");
		scanf("%ld",&n);
		printf("%ld!은 %ld입니다.\n",n,factorial(n));

		return 0;
}
