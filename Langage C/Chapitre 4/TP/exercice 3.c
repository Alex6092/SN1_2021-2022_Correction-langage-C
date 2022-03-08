#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
	char * str = (char*)malloc(1000 * sizeof(char));
	int i;
	
	printf("Saisir une chaine : ");
	gets(str);
	
	for(i = 0; i < strlen(str); i++)
	{
		printf("%c : %p\n", str[i], &str[i]);
	}
	
	free(str);
	
	system("PAUSE");
	return 0;
}