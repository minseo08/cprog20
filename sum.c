#include <stdio.h>

int main(void)
{
        int x;
        int y;
        int sum;
        printf("첫번째숫자를 입력하시오:");
        scanf("%d",&x);
        printf("두번째 숫자를 입력하시오:");
        scanf("%d",&y);
        sum = x+y;
        printf("두 수의 합:%d\n", sum);

        return 0;
}
