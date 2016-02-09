#include <stdio.h>

int stringlength(char string[])
{
	int stringlength = 0;
	char stringl[] = "\0";

	while(string[stringlength] != stringl[0])
		stringlength = stringlength + 1;
	return stringlength;
}

int main ()
{
	char str[] = "The quick brown fox";

	printf("The length of the string %s is %d\n", str, stringlength(str));
}