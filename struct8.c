#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LINE_SIZE 256
struct words 
{
		char word[10];
		int cnt;
};

void main()
{
		struct words arr[20];
		char buffer[LINE_SIZE];
		char* token;
		int e;
		FILE* fp=fopen("london.txt", "r");
		if(fp==NULL)
		{
				printf("Failed to open file\n");
				return;
		}
		while(fgets(buffer, LINE_SIZE-1, fp) != NULL)
		{
				token=strtok(buffer," ,.!?\t\n");
				while(token!=NULL)
				{
						arr[e].cnt=1;
						for(int i=0;i<e;i++)
						{
								if(strcmp(arr[i].word,token)==0)
								{
										arr[i].cnt++;
										e--;
								}
								
						}
						e++;
						token=arr[e].word;
						token=strtok(NULL," ,.!?\t\n");
						
				}
				for(int i=0;i<e;i++)
						printf("%d. %s : %d\n",i,arr[i].word,arr[i].cnt);
		}
		fclose(fp);

}
