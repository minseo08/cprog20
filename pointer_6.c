#include<stdio.h>

struct rect
{
		int w;
		int h;
};
int compare(struct rect x, struct rect y)
{
		return (x.w*x.h)-(y.w*y.h);
}
void print_rect(struct rect x, struct rect y, int (*func)(struct rect x,struct rect y))
{
		if(func(x, y)>0)
				printf("(%d, %d) (%d, %d)\n",x.w,x.h,y.w,y.h);
		else
				printf("(%d, %d) (%d, %d)\n",y.w,y.h,x.w,x.h);

}
int main()
{
		struct rect x={2,4};
		struct rect y={3,3};

		print_rect(x, y, compare);

		return 0;

}
