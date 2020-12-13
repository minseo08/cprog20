#include <stdio.h>

int main(void)
{
        int h;
		int w;
		float area;
		
        printf("삼각형 높이의 길이를 입력하시오:");
        scanf("%d",&h);
		
        printf("삼각형 밑변의 길이를 입력하시오:");
        scanf("%d",&w);
		
        area = w*h/2.0;
		
        printf("삼각형의 면적은 %f이다\n", area);
		
        return 0;
}
