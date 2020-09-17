#include<stdio.h>
int main(void)
{
		double light_speed = 300000;
		double distance = 149600000;

		double time;

		time = distance / light_speed;
		
		printf("speed of light is %fkm/s \n", light_speed);
		printf("length between sun and earth is %fkm \n", distance);
		printf("time is %fsecond \n", time);

		return 0;
}
