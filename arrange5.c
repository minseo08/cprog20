#include <stdio.h>
#define SIZE 10000
int main(void)
{
		int src[SIZE]={0};
		int dest[SIZE]={0};
		int i,j,k,l;

		for(i=0;i<SIZE;i++)
				src[i]=i;
		for(j=0;j<SIZE;j++)
				dest[j]=src[9999-j];

		for(k=0;k<10;k++)
				printf("%d ",src[k]);
		printf("\n");
		for(l=0;l<10;l++)
				printf("%d ",dest[l]);
		printf("\n");
		return 0;
}
