#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
		srand(time(NULL));
		int number=rand()%100;
		int guess;
		int try=0;
		do
		{
				printf("정답을 추측하여 보시오:");
				scanf("%d",&guess);
				try++;
				if (guess>number)
						printf("제시한 정수가 높습니다.\n");
				if (guess<number)
						printf("제시한 정수가 낮습니다.\n");
		} while(guess!=number);
		printf("축하합니다. 시도횟수=%d \n",try);

		return 0;
}
