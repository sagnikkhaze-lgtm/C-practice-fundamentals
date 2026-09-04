#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f= fopen("kasam.txt","w");
	
	char c[100]= "HI , My name is Sagnik Nag.\nI study in St.Xavier's College Kolkata";
	if(f==NULL)
	{
		printf("uh oh no connected");
	}
	
	fprintf(f,"%s",c);
	fclose(f);
	
	FILE *file= fopen("kasam.txt","r");
	
	char buffer[1024];
	
	while(fgets(buffer,sizeof(buffer),file)!= NULL)
	{
		printf("%s",buffer);
	}
	fclose(file);
	system("pwd");
}
