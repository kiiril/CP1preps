#include <stdio.h>
#include <string.h>
int main(){

	char sWord[20] = "truwudfvduwuuuwutfer";
	int dCounter = 0; 
	for(int i=0; i<=strlen(sWord)-3; i++){
		if(sWord[i] == 'u' && sWord[i+1] == 'w' && sWord[i+2] == 'u'){
			dCounter++;
		}
	}
	printf("\n The number of uwu is: %d \n", dCounter);

	return 0;
}
