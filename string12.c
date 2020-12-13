#include<stdio.h>
#include<string.h>
#define LINE_SIZE 256

void main()
{
		char seps[]=" ,\n";
		char *p;
		char buffer[LINE_SIZE];
		FILE *fp = fopen("london.txt","r");
		if(fp==NULL)
		{
				printf("Failed to open file\n");
				return;
		}

		while(fgets(buffer, LINE_SIZE-1, fp) != NULL)
		{
				p= strtok(buffer,seps);
				while(p!=NULL)
				{
						printf("%s\n",p);
						p=strtok(NULL,seps);
				}
		}
		fclose(fp);
}
