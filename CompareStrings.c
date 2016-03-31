#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void EnterString(char one[], char two[])
{
	printf("Please enter a string to compare\n");
	scanf("%s", one);
	printf("Now enter a string to compare to it\n");
	scanf("%s", two);
}

int main()
{

char one[100];
char two[100];
int check;
EnterString(one, two);

printf("comparing : %s , %s\n", one, two);
check = strcmp(one, two);

/*checks for alphabetical location*/
if(check > 0)
	{
		printf("%s comes after %s\n", one, two);
	}
else if (check < 0)
	{
		printf("%s comes before %s\n", one, two);
	}
else
	printf("%s and %s are at the same place\n", one, two);
	return 0;
}