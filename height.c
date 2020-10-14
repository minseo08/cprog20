#include <math.h>
#include <stdio.h>

double a, b, d, radian;

double get_height()
{
		printf("type a\n");
		scanf("%lf",&a);

		printf("type d\n");
		scanf("%lf",&d);

		radian=d*(3.141592 / 180.0);
		b=sin(radian)*a;

		return b;
}

int main()
{
		printf("b=%lf\n",get_height());

		return 0;
}
