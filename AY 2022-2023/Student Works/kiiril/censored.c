#include <stdio.h>
#include <string.h>
int main(){
	// declare variables
	char sWord[13];
	int dVowels = 0, dLen= 0;
	//strlen = return the current size of the string
	printf("\n Hello human this is Chat GPT-1, give me a word: ");
	scanf("%s", sWord); //no ampersand &

	//print the word
	printf("\n You have entered the word: %s. ", sWord);
	dLen = strlen(sWord);
	printf("\n The word has %d characters. ", dLen);

	//scan for word array
	for(int i=0; i<dLen; i++){
		switch(sWord[i]){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			dVowels++;
			sWord[i] = 'X';
			break;
		case '\0':break;	
		}
	}

	//print them to prompt the user
	printf("\n The word has %d vowels. ", dVowels);
	printf("\n Im allergic to vowels so I censored them for you. ");
	printf("\n Your word is now %s ", sWord);
	return 0;
}
