#include <stdio.h>
#include <string.h>

int main()
{
		char dst[12]="Hello";
		char src[6]="World";
		strcat(dst,src);

		printf("%s\n",dst);

		return 0;
}
