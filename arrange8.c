#include <stdio.h>
#define SIZE 5

void square_array(int a[],int size);
void print_array(int a[],int size);

int main()
{
		int list[SIZE]={1,2,3,4,5};

		print_array(list,SIZE);
		square_array(list,SIZE);
		print_array(list,SIZE);

		return 0;
}
void square_array(int a[],int n)
{
		int i;
		for(i=0;i<n;i++)
				a[i]=a[i]*a[i];
}
void print_array(int a[],int n)
{
		int i;
		for(i=0;i<n;i++)
				printf("%d ",a[i]);
		printf("\n");
}
