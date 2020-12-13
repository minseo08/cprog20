#include <stdio.h>

int main(void)
{
		int student;
		int a;
		int b;
		printf("학생 수를 입력하시오:");
		scanf("%d",&student);
		a = student/5;
		b = student*3/5;
		printf("학생 수:%d\n",student);
		printf("A등급 최대 인원수:%d\n",a);
		printf("B등급 최대 인원수:%d\n",b);
		
		return 0;
}
