#include <stdio.h>
#include <conio.h>
#include <string.h>

void fn()
{
	char str[100];
	
	gets(str);
	
	
	for(int i=0;str[i]==' ';)
	{
		for(int j=0;j<strlen(str);j++)
		{
			str[j]=str[j+1];
		}
	}
	
	for(int i=(strlen(str))-1;str[i]==' ';i--)
	{
		str[i]=str[i+1];
	}
	
	puts(str);	
	
	
}


main()
{
	
	printf("Vedite stroku:\n");
	
	fn();
	

}
