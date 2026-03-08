#include <stdio.h>

char charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};

int checkscore(char std[]){
	int score = 0;
	for(int i=0;i<10;i++){
		if(std[i] == charkeys[i]){
			score++;
		}
	}
	return score;
}

int choiceone(char std[8][10]){
	int choice = 0;
	for(int i = 0; i < 8; i++) {
        if(std[i][0] == charkeys[0]) {
            choice++;
        }
	}
	return choice;
}	

int main(){
	char std[8][10]={
		{'A','B','A','C','C','D','E','E','A','D'},//7
		{'D','B','A','B','C','A','E','E','A','D'},//6
		{'E','D','D','A','C','B','E','E','A','D'},//5
		{'C','B','A','E','D','C','E','E','A','D'},//4
		{'A','B','D','C','C','D','E','E','A','D'},//8
		{'B','B','E','C','C','D','E','E','A','D'},//7
		{'B','B','A','C','C','D','E','E','A','D'},//7
		{'E','B','E','C','C','D','E','E','A','D'}};//7
			
	

    for(int i=0;i<8;i++){
    	printf("std %d => %d\n", (i+1), checkscore(std[i]));
	}
	
	printf("student correct choice 1 : %d\n", choiceone(std));
	
	
}
