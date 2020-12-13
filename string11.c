#include <string.h>
#include <stdio.h>

int main(void)
{
		char s[]="language";
		char c='g';
		char *p;

		p=strchr(s, c);

		while (p!=NULL)
		{
				printf("Found at %d\n",(int)(p-s));
				p=strchr(p+1, c);
		}

		return 0;
}
