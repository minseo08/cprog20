#include <stdio.h>

int stack=100;
int n;
int opt;

int dec_item(int n)
{
		static int count = 0;
		count++;
		stack-=n;
		printf("판매는 %d번 되었습니다\n",count);
}

int inc_item(int n)
{
		stack+=n;
}

int print_item()
{
		printf("재고는 %d개 입니다.\n", stack);
}

int main()
{

		while(1)
		{
				printf("판매:1,입고:2,재고확인:3,종료: 4\n");
				scanf("%d",&opt);

				if (opt<3 && opt>0)
				{
						printf("수량을 입력하시오:");
						scanf("%d",&n);
				}
				switch (opt)
				{
						case 1:
								dec_item(n);
								break;
						case 2:
								inc_item(n);
								break;
						case 3:
								print_item();
								break;
						case 4:
								goto out;
						default:
								printf("잘못 선택함\n");

								
				}
		}
out:
		return 0;
}
