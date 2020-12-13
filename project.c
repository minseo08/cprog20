#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct athlete 
{
		char player_name[30];
		int back_number;
		int contract;
		int injury;
};

typedef struct athlete athlete;
int player_reg(athlete *player, int *tnp);
int player_search(athlete *player, int total_num_player, int (*func)(char*, char*));
int injury_reg(athlete *player);
int injury_rec(athlete *player);
int print_player(athlete *player, int total_num_player);
int callback_player_info(athlete **player, int *total_num_player, int (*func)(char*, char*));
int compare(char *str1, char *str2);

int main()
{
		int user_choice;
		int num_total_player = 0;
		
		athlete *player;
		int i;
		
		printf("선수단 규모(최대 명 수)를 입력해주세요: ");
		scanf("%d", &user_choice);
		
		player = (athlete *)malloc(sizeof(athlete) * user_choice);
		while (1)
		{
				printf("선수 관리 프로그램입니다.(저장 파일=>player.txt) \n");
    			printf("메뉴를 선택하세요 \n");
    			printf("1. 선수 명단 출력 \n");
    			printf("2. 선수 등록 \n");
    			printf("3. 선수 검색 \n");
    			printf("4. 부상 선수 체크 \n");
    			printf("5. 부상 회복 선수 체크 \n");
    			printf("6. 선수 명단 파일에 저장 \n");
				printf("7. 선수 명단 파일로 부터 받기 \n");
				printf("8. 프로그램 종료 \n");
				printf("===player.txt.파일 명단 데이터 순서===\n이름\n등번호\n남은계약기간");
				
				printf("메뉴 선택: ");
				scanf("%d", &user_choice);
				
				if (user_choice == 1)
				{
						for (i = 0; i < num_total_player; i++)
                         {
                                 printf("%s // 등번호: %d // 남은 계약 기간(년): %d //", player[i].player_name, player[i].back_number, player[i].contract);
                                 if (player[i].injury == 0)
                                         printf("부상 여부: NO\n");
                                 else
                                         printf("부상 여부: YES\n");
						 }
				}
				else if (user_choice == 2)
						player_reg(player, &num_total_player);
				else if (user_choice == 3)
						player_search(player, num_total_player, compare);
				else if (user_choice == 4)
						injury_reg(player);
				else if (user_choice == 5)
						injury_rec(player);
				else if (user_choice == 6)
						print_player(player, num_total_player);
				else if (user_choice == 7)
						callback_player_info(&player, &num_total_player, compare);
				else if (user_choice == 8)
						break;
		}
		free(player);
		return 0;
}
int print_player(athlete *player, int total_num_player)
{
		FILE *fp = fopen("player.txt", "w");
		int i;
		
		if (fp == NULL) 
		{
				printf("출력 오류 ! \n");
				return -1;
		}
		fprintf(fp, "%d\n", total_num_player);
		for (i = 0; i < total_num_player; i++) 
		{
				fprintf(fp, "%s\n%d\n%d\n", player[i].player_name, player[i].back_number,player[i].contract);
				if (player[i].injury == 0)
						fprintf(fp, "NO\n");
				else
						fprintf(fp, "YES\n");
		}
		printf("출력 완료! \n");
		fclose(fp);
		
		return 0;
}
int compare(char *str1, char *str2) 
{
		while (*str1) 
		{
				if (*str1 != *str2)
						return 0;
				str1++;
				str2++;
		}
		if (*str2 == '\0')
				return 1;
		
		return 0;
}

int callback_player_info(athlete **player, int *total_num_player, int (*func)(char*, char*)) 
{
		FILE *fp = fopen("player.txt", "r");
		int total_player;
		int i;
		char str[10];
		
		if (fp == NULL) 
		{
				printf("지정한 파일을 찾을 수 없습니다! \n");
				return -1;
		}
		fscanf(fp, "%d", &total_player);
		(*total_num_player) = total_player;
		
		free(*player);
		(*player) = (athlete *)malloc(sizeof(athlete) * total_player);
		
		if (*player == NULL) 
		{
				printf("\n ERROR \n");
				return -1;
		}
		for (i = 0; i < total_player; i++) 
		{
				fscanf(fp, "%s", (*player)[i].player_name);
				fscanf(fp, "%d", &(*player)[i].back_number);
				fscanf(fp, "%d", &(*player)[i].contract);
				fscanf(fp, "%s", str);
				
				if (func(str, "YES"))
						(*player)[i].injury = 1;
				else if (func(str, "NO"))
						(*player)[i].injury = 0;
		}
		
		fclose(fp);
		return 0;
}
int player_reg(athlete *player, int *tnp) 
{
		printf("선수 이름: ");
		scanf("%s", player[*tnp].player_name);
		
		printf("등번호: ");
		scanf("%d", &player[*tnp].back_number);
		
		printf("남은 계약 기간(년): ");
		scanf("%d", &player[*tnp].contract);
		
		player[*tnp].injury = 0;
		(*tnp)++;
		
		return 0;
}
int player_search(athlete *player, int total_num_player, int (*func)(char*, char*))
{
		int i;
		char user_search[30];
		
		printf("검색할 선수 이름을 입력해주세요: ");
		scanf("%s", user_search);
		
		printf("검색 결과 \n");
		
		for (i = 0; i < total_num_player; i++) 
		{
				if (func(player[i].player_name, user_search))
				{
						printf("선수 이름: %s // 등번호: %d // 남은 계약 기간(년): %d //", player[i].player_name, player[i].back_number, player[i].contract);
						if (player[i].injury==0)
								printf(" 부상 여부: NO\n");
						else if (player[i].injury==1)
								printf(" 부상 여부: YES\n");
				}
		}

		return 0;
}
int injury_reg(athlete *player)
{
		int player_num;
		
		printf("부상 선수의 명단에서의 순서를 입력해주세요 \n");
		printf("부상 선수의 명단에서의 순서 : ");
		scanf("%d", &player_num);
		
		if (player[player_num-1].injury == 1)
				printf("이미 부상체크된 선수입니다! \n");
		else 
		{
				printf("부상여부가 성공적으로 체크되었습니다. \n");
				player[player_num-1].injury = 1;
		}
		return 0;
}
int injury_rec(athlete *player) 
{
		int num_player;
		
		printf("부상 선수의 명단에서의 순서를 입력해주세요 \n");
		printf("부상 선수의 명단에서의 순서 : ");
		scanf("%d", &num_player);
		
		if (player[num_player-1].injury == 0)
				printf("이미 회복체크된 선수입니다!\n");
		else 
		{
				player[num_player-1].injury = 0;
				printf("회복여부가 성공적으로 체크되었습니다. \n");
		}
		return 0;
}
