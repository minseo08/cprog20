#include <stdio.h>

int main(void)
{
		int germ=10;
		int time=0;

		while (time<7)
		{
				germ=germ*4;
				time++;
		}
		printf("세균의 수 =%d\n",germ);

		return 0;
}
