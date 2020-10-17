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

		while (i<n)
				i++;
		printf("%d쌍입니다\n",rab(i-1));
		return 0;
}
