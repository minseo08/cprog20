#include <stdio.h>

int main(void)
{
        int x, y, z, sum;

        sum = 0;
        printf("say 3 integer(x, y, z):");
        scanf("%d %d %d",&x, &y, &z);
        sum += x;
		sum += y;
		sum += z;
        printf("sum of 3 integer is %d\n", sum);

        return 0;
}
