#include <stdio.h>
#include <string.h>
//for string length
#include <ctype.h>
//for toupper

int main(void)
{
	char s1[] = "It's a wonderful Life!";

	int count = 0;
	for (int i = 0; i < strlen(s1); i++)
	{
		switch (toupper(s1[i]))
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				count++;
		}
	}

	printf("Vowel count: %d\n", count);

	return 0; 

}