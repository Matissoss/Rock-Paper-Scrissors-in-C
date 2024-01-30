#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int playerChoice;
	int enemyChoice;
	printf("Rock, Paper, Scrissors - Game in C! \n Enter number 1 for Rock, 2 for Paper and 3 for Scrissors! \n");
	scanf("%d", &playerChoice);
	srand((unsigned) time(NULL));
	enemyChoice = rand() %3;
	if(playerChoice == 1 && enemyChoice == 0 || playerChoice == 2 && enemyChoice == 1 || playerChoice == 3 && enemyChoice == 2 )
	{
		printf("\n Draw! \n");
			if(enemyChoice == 0){
	    printf("Enemy has chosen: Paper!");
	}
	else if(enemyChoice == 1){
	    printf("Enemy has chosen: Paper!");
	}
	else if(enemyChoice == 2){
	    printf("Enemy has chosen: Scrissors!");
	}
	}
	else if(playerChoice == 1 && enemyChoice == 2 || playerChoice == 2 && enemyChoice == 0 || playerChoice == 3 && enemyChoice == 1 ){
		printf("\n You Won! \n");
			if(enemyChoice == 0){
	    printf("Enemy has chosen: Paper!");
	}
	else if(enemyChoice == 1){
	    printf("Enemy has chosen: Paper!");
	}
	else if(enemyChoice == 2){
	    printf("Enemy has chosen: Scrissors!");
	}
	}
	else if(playerChoice == 1 && enemyChoice == 1 || playerChoice == 2 && enemyChoice == 2 || playerChoice == 3 && enemyChoice == 0){
		printf("\n You Lose! \n");
			if(enemyChoice == 0){
	    printf("Enemy has chosen: Paper!");
	}
	else if(enemyChoice == 1){
	    printf("Enemy has chosen: Paper!");
	}
	else if(enemyChoice == 2){
	    printf("Enemy has chosen: Scrissors!");
	}
	}
	
	return 0;
}
