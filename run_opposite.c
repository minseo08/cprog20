#include<stdio.h>

int main()
{
		const float PI = 3.141592;
		float perimeter;
		int Panda;
		int Hoarse;
		float t;

		printf("Type the speed\n");
		printf("Panda:");
		scanf("%d",&Panda);
		printf("Hoarse:");
		scanf("%d",&Hoarse);

		perimeter = 5*2*PI;
		t = perimeter / (Hoarse-Panda);

		printf("t=%f\n",t);
		return 0;
}
