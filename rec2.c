#include <stdio.h>

int count=0;
void count_1(unsigned int x)
{
		if (x>0)
		{
	    count_1(x/2);
		if (x%2==1)
				count++;
		}
}

int main()
{
		int n;

		printf("정수를 입력하시오:\n");
		scanf("%d",&n);

		count_1(n);
		printf("해당되는 2진수의 1의 개수는 %d개 입니다.\n",count);

		return 0;
}
