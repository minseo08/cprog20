#include <stdio.h>
#include <ctype.h>
#define SIZE 26

void main()
{
		char str[]="The worst thing to eat before you sleep";
		printf("%d\n",'A');
		printf("%d\n",'B'-'A');
		int cnt=0;
		int i;

		for(i=0;i<40;i++)
		{
				if(islower(str[i]))
						str[i]=toupper(str[i]);
				if (str[i]>=65&&str[i]<=65+SIZE-1)
						cnt++;
		}
		printf("%d개의 문자 사용\n", cnt);
}

