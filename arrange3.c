#include <stdio.h>
int main(void)
{
		int arr[10]={3,8,1,1,2,5,2,4,3,6};
		int i;
		int j;

		for(i=0;i<10;i++)
				for(j=1;i+j<10;j++)
						if (arr[i]+arr[i+j]>=10)
								printf ("arr[%d]=%d,arr[%d]=%d\n",i,arr[i],i+j,arr[i+j]);

		return 0;

}
