#include <stdio.h>
#include <string.h>

int main()
{
		char dst[6];
		char src[6]="Hello";
		strcpy(dst, src);

		printf("%s\n",dst);

		return 0;
}

