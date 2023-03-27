#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
/*
 * password_generator - generates a random password
 *
 * Return : void
 *
 */void password_generator(int N)
{
    /* Initialize counter */
    int i = 0;
  
    int randomizer = 0;

    /* 
     * Arrays of:
     *  - numbers
     *  - letters
     *  - special characters
     *  */
    char numbers[] = "0123456789";
 
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
  
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
  
    char symbols[] = "!@#$^&*?";
  
    /* Stores the random password */
    char password[10];

    /*
     * Seed the random-number generator
     * with current time so that the
     * numbers will be different every time
     */
    srand((unsigned int)(time(NULL)));

    /* To select the randomizer */
    randomizer = rand() % 4;

    /* Iterate over the range [0, N] */
    for (i = 0; i < N; i++) 
    {

        if (randomizer == 1)
	{
		password[i] = numbers[rand() % 10];
		randomizer = rand() % 4;
		printf("%c", password[i]);
	}
	else if (randomizer == 2) 
	{
 		password[i] = symbols[rand() % 8];
		randomizer = rand() % 4;
		printf("%c", password[i]);
	}
	else if (randomizer == 3) 
	{
		password[i] = LETTER[rand() % 26];
		randomizer = rand() % 4;
		printf("%c", password[i]);
	}
        else
	{
		password[i] = letter[rand() % 26];
		randomizer = rand() % 4;
		printf("%c", password[i]);
		}
	}
}
  /* Driver Code */
int main()
{
	/* Length of pasword */
	int N = 5;	
	/* Function Call */
	password_generator(N);

	return 0;
}
