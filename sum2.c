#include <stdio.h>
#include <sys/time.h>

int main()
{
		struct timeval t_start,t_end;
		//long sum, i;
		register long sum,i;

		gettimeofday(&t_start, NULL);

		sum = 0;
		for(i=0;i<10000000;i++)
				sum+=i;
		printf("sum=%ld\n",sum);
		
		gettimeofday(&t_end, NULL);		
		
		printf("%lf secs\n",(t_end.tv_sec - t_start.tv_sec + (t_end.tv_usec - t_start.tv_usec)/ 1000000.0));
		
		return 0;
}
