#include <stdio.h>

main()
{
	int min,max,sum,a,b = 0;
	printf("skol'ko chisel vy vvedete?\n");
	scanf("%i",&a);
	printf("vvedite chislo:\n");
	scanf("%i",&b);
	min=max=sum=b;
	
	for(int i=1;i<a;i++)
	{
		printf("vvedite chislo:\n");
	    scanf("%i",&b);
	    
	    sum=sum+b;
	    
		if(min>b)
		{
			min=b;
		}
		if(max<b)
		{
			max=b;
		}
	}
	printf("minimalnoe chislo: %i\n",min);
	printf("maksimalnoe chislo: %i\n",max);
	printf("summa: %i\n",sum);
	printf("srednearifmeticheskoe: %i",sum/a);
}
