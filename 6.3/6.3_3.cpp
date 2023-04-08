#include <stdio.h>
#include <string.h>

main()
{
	char str[100];
	
	gets(str);
	
	int i;
	
	printf("vedite nomer simvola:\n");
	scanf("%i",&i);
	
	for(int j=i-1;j<strlen(str);j++)
	{
		str[j]=str[j+1];
	}
	
	puts(str);
}
