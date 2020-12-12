#include<stdio.h>

int main() {
	char c;

	int low_vowel, up_vowel;
	printf("Enter an alphabet: ");
	scanf("%c", &c);

	// evaluates to 1 if c is low vowel 

low_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

// evaluates to 1 if c is a upper vowel

  up_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

 if(low_vowel || up_vowel)
	 printf("%c is a vowel.",c);
 else
	 printf("%c is a consonant.",c);

 return 0;

}
