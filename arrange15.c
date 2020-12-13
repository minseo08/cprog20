#include<stdio.h>
#define ROWS 3
#define COLS 5

int main(void)
{
		float a[ROWS][COLS]={{87,98,80,76,3},
				{99,89,90,90,0},
				{65,68,50,49,0}};
		float b[1][4];
		for(int i=0;i<COLS;i++)
			b[1][i]=(a[0][i]+a[1][i]+a[2][i])/3;
		for(int i=0;i<4;i++)
				printf("%f ",b[1][i]);
		printf("\n");

		return 0;
}
