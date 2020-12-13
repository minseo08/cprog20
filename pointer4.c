#include<stdio.h>
void prnt_arr(int a[],int n)
{
		int *p;
		p=a;
		
		for(int i=0;i<n;i++)
				printf("%d ",*p++);
		printf("\n");
}
int main()
{
		int arr[5]={2, 4, 6, 8, 10};
		
		prnt_arr(arr,5);

		return 0;
}

