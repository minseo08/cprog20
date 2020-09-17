#include<stdio.h>

int main()
{
		const double PI = 3.141592;
		float perimeter;
		int Panda;
		int Hoarse;
		double t;

		printf("Type the speed\n");

		printf("Panda:");
		scanf("%d",&Panda);
		printf("Hoarse:");
		scanf("%d",&Hoarse);
		
		perimeter = 5*2*PI;
		t = perimeter / (Panda+Hoarse);

		printf("t=%f\n",t);
		return 0;
}
