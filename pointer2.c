#include<stdio.h>
int get_min_max(int a[], int n, int* max, int* min)
{
		*min=a[0];
		*max=a[0];

		for(int i=0;i<n;i++)
		{
				if (a[i]<*min)
						*min=a[i];
		}
		for(int i=0;i<n;i++)
		{
				if (a[i]>*max)
						*max=a[i];
		}
		return 0;
}
int main()
{
		int arr[5]={10, 2, 6, 8, 4};
		int min, max;
		
		get_min_max(arr,5,&max,&min);

		printf("min=%d max=%d\n", min, max);

		return 0;
}
