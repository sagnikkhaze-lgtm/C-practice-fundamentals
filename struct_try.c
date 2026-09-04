#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef char* string;

typedef struct {
	char name[50];
	int roll;
	int age;
	float gpa;
	bool isfullTime;
}student ;

int main()
{
	student s1={"Sagnik Nag",563,19,5.6,true};
	student s2={"Patrick Brambha ", 566,18,8.1,false};
	
	//declaring an empty struct
	student s3={0};
	
	strcpy(s2.name,"Sandy");
	printf("%s",s2.name);
	
}
