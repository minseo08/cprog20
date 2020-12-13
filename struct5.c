#include <stdio.h>

struct student
{
		int number;
		char name[10];
		double grade;
};
void inc_grade(struct student *s)
{
		s->grade++;
}
int main(void)
{
		struct student s1={1,"kim",90};
		inc_grade(&s1);
		printf("%lf\n",s1.grade);

		return 0;
}
