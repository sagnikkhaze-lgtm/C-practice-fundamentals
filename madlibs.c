#include <stdio.h>
#include <string.h>

int main(void)
{
	int c=50;
	char adj1[c],adj2[c],adj3[c],vrb1[c],n[c],vrb2[c];
	

	printf("Enter a adjective (description) : ");
	fgets(adj1,c,stdin);
	adj1[strlen(adj1)-1]='\0';
	
	printf("Enter a adjective (description) : ");
	fgets(adj2,c,stdin);
	adj2[strlen(adj2)-1]='\0';
	
	printf("Enter a adjective (description) : ");
	fgets(adj3,c,stdin);
	adj3[strlen(adj3)-1]='\0';
	
	printf("Enter a verb (action) : ");
	fgets(vrb1,c,stdin);
	vrb1[strlen(vrb1)-1]='\0';
	
	printf("Enter a verb (action) : ");
	fgets(vrb2,c,stdin);
	vrb2[strlen(vrb2)-1]='\0';
	
	printf("Enter a noun (person) : ");
	fgets(n,c,stdin);
	n[strlen(n)-1]='\0';

	printf("today i saw %s ",n);
	printf("he was %s ",vrb1);
	printf("in a very %s way.\n",adj1);
	printf("He was %s in a %s way which %s us", vrb2, adj2, adj3);
}
