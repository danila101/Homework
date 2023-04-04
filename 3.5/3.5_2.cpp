#include <stdio.h>

main()
{
	int i=5;
    int sum=0;
    while(i<16)
    {
    	sum=sum+i;
    	printf("%i+",i);
    	i++;
	}
	
	printf("\b=%i",sum);

}
