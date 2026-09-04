#include <stdio.h>
#include <ctype.h>

int main()
{
    int scr=0;//score calculator
    
    char* qs[] = {
        "Which video game franchise  features a protagonist named Geralt of Riva?",
        "In the avengers(2012) what food do they eat together in the iconic post credit screen? ",
        "what is the primary funtional programming language used to build the core infrastructure of whatsapp? ",
        "which layer of atmosphere lies directly above the troposphere ?",
        "which mountain range seperates europe from asia?"
    };
    
    char optn[][100] = {"A.Elder Scrolls\nB.Dark souls\nC.The witcher\nD.Dragon Age","A.Tacos\nB.Shawarma\nC.Pizza\nD.Chees Burgers","A.Erlang\nB.Rust\nC.C++\nD.Go","A.Mesosphere\nB.Stratosphere\nC.Thermosphere\nD.Exosphere","A.the alps\nB.The Andes\nC.The Ural\nD.The Apalachian"};
    
    char cg[]={'C','B','A','B','C'};

    int len= sizeof(qs)/sizeof(qs[0]);//calculating sizze of the array

    printf("\n\t\t\t G U E S S I N G \t\t G A M E \n");
    printf("RULE : Enter ONLY the OPTION NUMBER/CHARACTER NOT the Entire Option!!\nBEST OF LUCK ;) \n");
    
    for(int i=0;i<len;i++)
    {
        char ch='\0';
        printf("\n%s\n",qs[i]);
        printf("%s \n",optn[i]);
        printf("Enter your Choice : ");
        scanf(" %c",&ch);
		
		// 2. CLEAR THE REST OF THE BUFFER (The Fix!)
		int temp;
		while ((temp = getchar()) != '\n' && temp != EOF) {
				// Do nothing, just consume the characters
				}
        
        if (toupper(ch) == cg[i])
        {
            printf("Damn! Correct :) \n");
            scr=scr+1;
            continue;
        }
        else
        {
            printf("Uh oh! Wrong :( \n");
        }
    }
    printf("Your total Score is = %i",scr);
}
