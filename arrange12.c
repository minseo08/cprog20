#include<stdio.h>
#define SIZE 5

int sort(float list[])
{
		int i,j,least;
		float temp;

		for(i=0;i<SIZE-1;i++)
		{
				least=i;
				for(j=i+1;j<SIZE;j++)
						if(list[j]<list[least])
								least=j;
				temp=list[i];
				list[i]=list[least];
				list[least]=temp;
		}
		for(i=0;i<SIZE;i++)
				printf("%d등:%f\n",i+1,list[i]);
		return 0;
}
int main()
{
		float list[SIZE];
		for(int i=0;i<5;i++)
		{
				printf("학생%d:",i+1);
				scanf("%f",&list[i]);
		}
		sort(list);

		return 0;
}
