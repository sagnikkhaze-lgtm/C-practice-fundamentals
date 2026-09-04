#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#import <stdbool.h>

int main()
{
	// Seed the random number generator using the current system time so the target number changes every run
	srand(time(NULL));
	
	// Define the lower and upper bounds, user input choice, and guess counter
	int min=50, max=100, ch, try=1;
	
	// Flag to keep the game loop running until the correct number is guessed
	bool flag=true;
	
	// Generate a random integer between min (50) and max (100) inclusive
	int ran= (rand()%(max-min+1))+min;
	
	// Print the generated number (useful for testing/debugging)
	printf("%d \n",ran);
	
	// Loop continuously until flag becomes false
	while(flag)
	{
		// Ask the user for their guess
		printf("Enter your choice : ");
		scanf("%d",&ch);
		
		// Check if the user guessed correctly
		if(ch==ran)
		{
			printf("good guess !\n You guessed in %d ties congrats !!!",try);
			flag=false; // Set flag to false to terminate the loop
		}
		else
		{
			// User guessed higher than the target number
			if(ch>ran)
			{
				// Check if the guess is within 10 units above the target
				if((ch-ran)<10)
				{
					printf("uh oh! wrong answer but u are close , try again.. \n");
				}
				else
				{
					printf("uh oh! wrong answer ur guess is too high , try again.. \n");
				}
			}
			// User guessed lower than the target number
			else
			{
				// Check if the guess is within 10 units below the target
				if((ran-ch)<10)
				{
					printf("uh oh! wrong answer but u are close , try again.. \n");
				}
				else
				{
					printf("uh oh! wrong answer ur guess is too low , try again.. \n");
				}
			}
			// Increment the attempt counter for incorrect guesses
			try++;
			
		}
	}
}
