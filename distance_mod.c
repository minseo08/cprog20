#include<stdio.h>
int main(void)
{
		double light_speed = 300000;
		double distance = 149600000;
		int minute;
		int second;
		int time;

		time= distance / light_speed;
		
		printf("speed of light is %fkm/s \n", light_speed);
		printf("length between sun and earth is %fkm \n", distance);
		minute = time/60;
		second = time%60;
		printf("time is %dminute %dsecond \n", minute, second);

		return 0;
}
