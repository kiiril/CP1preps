#include <stdio.h>
#include <string.h>
int main(){

	char sWord[25];
	int dNumber, dCounter = 0;
	printf("\n Enter the string: ") ;
	scanf("%s", sWord);
	printf("\n Give the number of letters: ");
	scanf("%d", &dNumber);
	for(int i=0; i<=strlen(sWord)-dNumber; i++){
		for(int j=i; j<i+dNumber; j++){
			printf("%c", sWord[j]);
		}
		dCounter++;
		printf(", ");
	}
	printf("\nThe number of such words is: %d \n", dCounter);

	return 0;
}
