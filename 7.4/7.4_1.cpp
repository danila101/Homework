#include <stdio.h>
#include <conio.h>
#include <string.h>

void fn()
{
	char str[100];
	char a;
	
	gets(str);
	scanf("%c",&a);
	
	int b=strlen(str);
	
	str[0]=str[b-1]=a;
	
	puts(str);	
	
	
}


main()
{
	
	printf("Vedite stroku i simvol:\n");
	
	fn();
	

}
