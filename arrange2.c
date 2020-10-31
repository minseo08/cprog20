#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
		int i;
		int scores[SIZE];

		for(i=0;i<SIZE;i++)
		{
				scores[i]=rand()%100;
				while (scores[i]==scores[i-1])
						scores[i]=rand()%100;
		}
		for(i=0;i<SIZE;i++)
				printf("scores[%d]=%d\n",i,scores[i]);

		return 0;
}
