#include <stdio.h>
#define SIZE 5
int get_min(int scores[],int n);
int get_max(int scores[],int n);

int main(void)
{
		int scores[SIZE]={1,2,3,4,5};
		int min;
		int max;

		min=get_min(scores,5);
		max=get_max(scores,5);
		printf("minimum is %d, maximum is %d\n",min,max);

		return 0;
}
int get_min(int scores[], int n)
{
		int i;
		int min=scores[0];

		for(i=0;i<n;i++)
		{
				if (scores[i]<min)
						min=scores[i];
		}
		return min;
}
int get_max(int scores[], int n)
{
		int i;
		int max=scores[0];

		for(i=0;i<n;i++)
		{
				if (scores[i]>max)
						max=scores[i];
		}
		return max;
}
