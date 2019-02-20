/*
 * Game.c
 *
 *  Created on: Feb 19, 2019
 *      Author: hikar
 */

#include <stdio.h>

int main()
{
	char board[3][3];
	char winner;
	int done = 0;
	int row;
	int col;
	for(int i = 0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
			board[i][j]='*';
			printf("%c",board[i][j]);
			if(j==2)
				printf("\n");
		}
	}
	while(done!=1)
	{
		done = 1;
		printf("Player 1 select row: ");
		fflush(stdout);
		scanf("%d", &row);
		printf("Player 1 select column: ");
		fflush(stdout);
		scanf("%d", &col);
		board[row][col]='x';
		printf("Player 2 select row: ");
		fflush(stdout);
		scanf("%d", &row);
		printf("Player 2 select column: ");
		fflush(stdout);
		scanf("%d", &col);
		board[row][col]='o';
		for(int i = 0; i<3; i++)
		{
			for(int j = 0; j<3; j++)
			{
				if(board[i][j]=='*')
					done=0;
				printf("%c",board[i][j]);
				if(j==2)
					printf("\n");
			}
		}
		for(int i = 0; i<3; i++)
		{
			if((board[i][0]!='*')&&(board[i][0]==board[i][1])&&(board[i][0]==board[i][2]))
			{
				winner = board[i][0];
				board[i][0]='*';
				done = 1;
			}
			else if((board[0][i]!='*')&&((board[0][i]==board[1][i])&&(board[0][i]==board[2][i])))
			{
				winner = board[0][i];
				board[0][i]='*';
				done = 1;
			}
		}
		if((board[0][0]!='*')&&(board[0][0]==board[1][1]&&board[0][0]==board[2][2]))
		{
			winner = board[0][0];
			board[0][0]='*';
			done = 1;
		}
	}
	if(winner == 'x')
		printf("The winner is Player 1");
	else if(winner == 'o')
		printf("The winner is Player 2");
	else
		printf("Tied Game");

	return 0;
}
