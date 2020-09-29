#include<stdio.h>

int main(void)
{
		int month;

		printf("태어난 달을 입력하시오.");
		scanf("%d", &month);

		if(month>=3 && month<=5)
				printf("봄에 태어났군요.");
		else if(month>=6 && month<=8)
				printf("여름에 태어났군요.");
		else if(month>=9 && month<=11)
				printf("가을에 태어났군요.");
		else
				printf("겨울에 태어났군요.");

		return 0;
}
