#include <stdio.h>
#include <stdbool.h>

int main()
{
	double a,b,t=0.0;
	bool flag=true,fstrun=true;
	
	for(int i=1;i<=5;i++)
	{
		
	}
	while(flag)
	{
		if(fstrun)
		{
			printf("Enter 1st number : ");
			scanf("%lf",&a);
			
			printf("Enter 2nd number : ");
			scanf("%lf",&b);
			
			fstrun=false;
		}
		else
		{
			printf("enter number : ");
			scanf("%lf",&a);
			b=t;
		}
		
		int ch;
		printf("\t\tC H A R T \n");
		printf("1.         +  \n");
		printf("2.         -  \n");
		printf("3.         *  \n");
		printf("4.         /  \n");
		printf("Enter Your choice : ");
		scanf("%d",&ch);
		
		switch(ch) //performing calculations
		{
			case 1:
				t=a+b;
				break;
			case 2:
				t=b-a;
				break;
			case 3:
				t=a*b;
				break;
			case 4:
				if(a==0)
				{
					printf("NA.");
					break;
				}
				else
				{
					t=b/a;
					break;
				}
			default:
				printf("wrong choice sir please try again");
		}
		
		char con;
		printf("Do u want to continue ? y/n");
		scanf(" %c", &con);
		
		if(con == 'y' || con == 'Y') //flag changing statement
		{
			flag=true;
		}
		else
		{
			flag=false;
		}
	}
	printf("Your total is = %.2f",t);
}
