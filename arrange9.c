#include <stdio.h>

void get_sum(int arr[],int n);

int main()
{
		int arr[10];

		for(int i=0;i<10;i++)
				arr[i]=i;
		get_sum(arr,10);

		for(int i=0;i<10;i++)
				printf("%d\n",arr[i]);
		return 0;
}
void get_sum(int arr[],int n)
{
		int tmp[10];

		for(int i=1;i<n;i++)
				tmp[i]=arr[i-1]+arr[i];
		for(int i=0;i<n;i++)
				arr[i]=tmp[i];
				
}
