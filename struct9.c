#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_NUM 100

enum TYPES {SHIRTS=1, PANTS=2, DRESS=3};
struct item
{
		int type;

		union
		{
				char sml[4];
				int num;
		} size;
};
int main()
{
		struct item prod[MAX_NUM];
		FILE* fp = fopen("item.dat","r");
		if(!fp)
		{
				printf("Failed to open file\n");
				return -1;
		}
		int type;
		char size[100];

		while(!feof(fp))
		{
				fscanf(fp,"%d %s\n",&type,size);
				switch(type)
				{
						case SHIRTS:
							    prod->size.num=*size;
								break;
						case PANTS:
								strcpy(prod->size.sml,size);
								break;
						case DRESS:
								strcpy(prod->size.sml,size);
								break;
				}
		}
		for(int i=0;i<10;i++)
		{
				switch(type)
				{
						case SHIRTS:
								printf("셔츠 %d호\n",prod->size.num);
								break;
						case PANTS:
								printf("바지 %s사이즈\n",prod->size.sml);
								break;
						case DRESS:
								printf("원피스 %s사이즈\n",prod->size.sml);
								break;
				}
		}

		return 0;
}

