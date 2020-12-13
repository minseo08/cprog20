#include <stdio.h>
void arr_sum(int a[], int n)
{
		int sum=0;
		int *p;
		p=a;

		for(int i=0;i<5;i++)
				sum += *p++;
		printf("sum=%d\n",sum);
}
int main()
{
		int arr[5] = {2, 4, 6, 8, 10};
		
		arr_sum(arr,5);

		return 0;
}
