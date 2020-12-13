#include <stdio.h>
struct point
{
		int x;
		int y;
};
struct circle
{
		struct point cp;
		int radius;
};
int main(void)
{
		struct circle c1;
		struct circle c2;
		printf("첫번째  원의 중심의 좌표를 입렧하시오(x y)");
		scanf("%d %d",&c1.cp.x,&c1.cp.y);
		printf("첫번째 원의 반지름을 입력하시오:");
		scanf("%d",&c1.radius);
		printf("두번째  원의 중심의 좌표를 입력하시오(x y)");
		scanf("%d %d",&c2.cp.x,&c2.cp.y);
		printf("두번째 원의 반지름을 입력하시오:");
		scanf("%d",&c2.radius); 

		if ((c1.radius==c2.radius)&&(c1.cp.x==c2.cp.x)&&(c1.cp.y==c2.cp.y))
				printf("c1과 c2가 같습니다.");
		else
				printf("c1과 c2는 다릅니다.");
}
