#include <stdio.h>
#include <conio.h>

int calc(int a)
{
	if(0<=a&&a<=2)
	{
		return 0;
	}
		
	
	for(int i=1;i<a;i++)
	{
		if(i*i==a)
		{
			return 1;
		}
		else if(i*i>a)
		{
			return 0;
		}
		
	}
}

void calc(int *a)
{
	if(0<=*a&&*a<=2)
	{
		*a = 0;
	}
		
	for(int i=1;i<(*a);i++)
	{
		if(i*i==(*a))
		{
			*a=1;
			break;
		}
		else if(i*i>(*a))
		{
			*a=0;
			break;
		}
		
	}
}

void calc(int &a, int b)
{
	if(0<=a&&a<=2)
	{
		a = 0;
	}
		
	for(int i=1;i<a;i++)
	{
		if(i*i==a)
		{
			a=1;
			break;

		}
		else if(i*i>a)
		{
			a=0;
			break;

		}
		
	}
}

main()
{
	int a,b,c;
	
	printf("Vedite tri chisla:\n");
	scanf("%i%i%i",&a,&b,&c);
	
	a=calc(a);
	calc(&b);
	calc(c,a);
	
	int s=a+b+c;
	
	printf("%i chisla imeyut celye korni\n",s);

	

}
