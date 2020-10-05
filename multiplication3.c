#include <stdio.h>

int main(void)
{
		int x,y;

		for(y=1;y<=9;y++)
				for(x=1;x<=9;x++)
				{
						if (x*y%2==0)
						printf("%d*%d=%d\n",y,x,x*y);
				}

		return 0;

}
