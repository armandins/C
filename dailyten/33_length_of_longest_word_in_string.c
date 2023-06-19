#include <stdio.h>

int largest(char *s);

int main()
{
	char [s] = "The real coder is here."

	return 0;
}

int largest(char *s)
{
	int len = strlen(s);
	int count = 0;
	int maxlen = -1;
	char nonwords[] = " .,";

	int i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (strchr(nonwords,s[i])) != NULL)
				break;
			i++;
			count++;	
		}

		if (count > maxlen) max = count;

		while (i < len)
		{
			if (strchr(nonwords, s[i])) == NULL)
				break;
				i++;
		}
	}





}