#include <stdio.h>

void addthree(int number[], int pos[][2], int sizePos) {
    for (int i = 0; i < 3; i++) {
        int index = pos[i][0];
        int valueToAdd = pos[i][1];
        number[index] += valueToAdd;
    }
}

main() {
	int number[5] = {20, 50, 100, 199, 9};
	int add[2][2] = {{1,5},{3,10}};
	addthree(number,add,2);
	
	for(int i = 0; i < 5; i++) {
        printf("number[%d] : %d\n", i, number[i]);
    }
}
