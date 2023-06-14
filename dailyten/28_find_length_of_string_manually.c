#include <stdio.h>
#include <string.h>

int string_length(char *string);

int main(void)
{
	char *s1 = "this is the way.";
	// using strlen first for length
	int strlength = strlen(s1);
	
	printf("stringh length is: %d\n", strlength);
	// using our defined length for our length
	int our_length = string_length(s1);
	
	printf("our length: %d\n", our_length);

	return 0;
}

int string_length(char *string)
{
	//basicaly says count untill you encounter null terminator.
	int length = 0;
	while (string[length] != '\0') length++;
	return length;
}