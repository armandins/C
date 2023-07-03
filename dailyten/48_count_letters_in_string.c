#include <stdio.h>
#include <string.h>
#include <ctype.h>
// isalpha function in ctype lets us know if a character is a letter or not! 

int count_letters();

int main()
{	
	char s[] = "A string with some letters! $#$12453253";

	int result = count_letters(s);

	printf("Number of letters: %d\n", result);

	return 0;
}


int count_letters(char *s)
{
	int length = strlen(s);
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (isalpha(s[i]))
		count++; 
	}

	return count;
}