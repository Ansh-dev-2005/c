////vowel or consonant
#include <stdio.h>
int main()
{
  char word;
  printf("Enter the Chrachter \n");
  scanf("%c",&word );
  switch (word) {
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
    printf("Vowel\n", &word);
    break;
    default:
    	printf("Consonant");
  }
}
