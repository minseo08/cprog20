#include<stdio.h>
#include<stdlib.h>

void print_equal(int a, int b, int(*func)(int, int))
{
		if(func(a,b))
				printf("같음\n");
		else
				printf("안 같음\n");
}
int square_comp(int a, int b)
{
		return abs(a*a)==abs(b*b)? 1 : 0;
}
int main()
{
		int x = 30;
		int y = -30;

		print_equal(x, y, square_comp);

		return 0;
}
