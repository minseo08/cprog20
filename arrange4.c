#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main(void)
{
		int freq[SIZE] = {0};
		int i;

		for(i=0;i<10000;i++)
				++freq[rand()%6];
		printf("====================\n");
		printf("frequency\n");
		printf("====================\n");

		for(i=0;i<SIZE;i++)
				printf("%d's frequency = %d\n",i+1,freq[i]);
		return 0;
}
