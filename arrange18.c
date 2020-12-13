#include <stdio.h>

int main()
{
		int board[5][5];
		int x,y,k,a,b;
		for(x=0;x<5;x++)
				for(y=0;y<5;y++)
						board[x][y]=0;
		for(k=0;k<3;k++)
		{
				printf("행렬  좌표(x y):");
				scanf("%d %d",&x,&y);
				board[x-1][y-1]=1,board[x-1][y]=1,board[x-1][y+1]=1,board[x][y-1]=1,board[x][y]=1,board[x][y+1]=1,board[x+1][y-1]=1,board[x+1][y]=1,board[x+1][y+1]=1;
		}
		int cnt=0;
		for(a=0;a<5;a++)
				for(b=0;b<5;b++)
						if (board[a][b]==0)
						{
								printf("%d %d\n",a,b);
								cnt++;
						}
		printf("%d만큼의 영역이 남아있음.\n",cnt);
		return 0;

}
