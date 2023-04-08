#include <stdio.h>
#include <string.h>

main()
{
	char str[100];
	char str1[100];
	
	gets(str);
		
	for(int j=0,i=strlen(str)-1;i>=0;i--,j++)
	{
		str1[j]=str[i];
	}
	
	puts(str1);
}
