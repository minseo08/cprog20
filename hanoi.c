#include <stdio.h>

int count;
void hanoi_tower(int n, char from, char tmp, char to)
{
		if(n==1) count++;
		else
		{
				hanoi_tower(n-1,from,to,tmp);
				hanoi_tower(n-1,tmp,from,to);
				
				count++;
		}
}

int main()
{
		hanoi_tower(5,'A','B','C');
		printf("%d번 움직여야해요!\n",count);
		return 0;
}
