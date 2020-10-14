#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
		srand((unsigned)time(NULL));
		int i=rand()%10+1;
		if (i>=1 && i<=3)
				printf("1\n");
		else if (i>=4 && i<=6)
				printf("2\n");
		else if (i==7)
				printf("3\n");
		else if (i==8)
				printf("4\n");
		else if (i==9)
				printf("5\n");
		else
				printf("6\n");

		return 0;
}

