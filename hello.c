#include <stdio.h>

/*long factorial(int n)
{
		if(n<=1) return 1;
		else return n*factorial(n-1);
}

int main()
{
		long n;

		printf("정수를 입력하시오:");
		scanf("%ld",&n);
		printf("%ld!은 %ld입니다.\n",n,factorial(n));

		return 0;
}
*/
#include <stdio.h>

int rab(int n)
{
		if (n==0) return 1;
		else if (n==1) return 2;
		else return rab(n-1) + rab(n-2);
}

int main()
{
		int n;
		int i=0;

		printf("토끼 쌍 확인하고 싶은 개월차 수:");
		scanf("%d", &n);

		printf("%d쌍입니다\n",rab(n-1));
		return 0;
}
