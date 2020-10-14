#include <stdio.h>

int is_prime(int n)
{
		int divisors = 0;
		int i;
		for(i=1;i<=n;i++)
		{
				if(n%i==0)
						divisors++;
		}
		return(divisors ==2);
}
int main()
{
		int a,j;
		printf("type integer:");
		scanf("%d",&a);

		for(j=1;j<=a;j++)
		{
				if (is_prime(j)==1)
						printf("%d\n",j);
		}

		return 0;

}

