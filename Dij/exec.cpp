#include <stdio.h>
#define eleNum 6
int main(){
	
	int arr[eleNum][eleNum];
	
	arr[0][1] = 6; 
	arr[0][3] = 8; 
	arr[1][0] = 18;
	arr[1][2] = 7;
	arr[1][5] = 10;
	arr[2][0] = 9;
	arr[2][3] = 15;
	arr[3][2] = 12;
	arr[4][2] = 4;
	arr[5][0] = 24;
	arr[5][1] = 5;
	arr[5][3] = 25;

	return 0;
}