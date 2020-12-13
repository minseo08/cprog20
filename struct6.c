#include <stdio.h>
#include <string.h>
#define STU_NUMBER 1
#define PHO_NUMBER 2

struct student
{
		int type;
		union
		{
				int stu_number;
				char pho_number[11];
		}id;
		char name[20];
};
void print(struct student s)
{
		switch(s.type)
		{
				case STU_NUMBER:
						printf("학번 %d\n",s.id.stu_number);
						printf("이름:%s\n",s.name);
						break;
				case PHO_NUMBER:
						printf("휴대폰 번호:%s\n",s.id.pho_number);
						printf("이름:%s\n",s.name);
						break;
				default:
						printf("타입오류\n");
						break;
		}
}
int main(void)
{
		struct student s1,s2;
		s1.type=STU_NUMBER;
		s1.id.stu_number=20190001;
		strcpy(s1.name,"홍길동");

		s2.type=PHO_NUMBER;
		strcpy(s2.id.pho_number,"01012345678");
		strcpy(s2.name,"김철수");

		print(s1);
		print(s2);
}
