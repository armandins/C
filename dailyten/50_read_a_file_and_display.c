#include <stdio.h>

int main()
{
	FILE *fh;
	fh = fopen("file.txt", "r"); 
	//"r" for read only mode.
	//if the files name is incorrect or some other problem
	// this function will return null
	// so we need a condition

	if (fh != NULL)
	{
		//read each character in the file one at atime 
		// and display it in the terminal
		char c;
		while ((c = fgetc(fh)) != EOF)
			putchar(c);
		fclose(fh);

	}
	else printf("Error Opening File!\n");
}