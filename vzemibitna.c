#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int vzemiBitna(int a , int pos)
{
	return (a >> pos) & 1;
}

void validateNumber(char *inString)
{
    for (int i = 0; i < strlen(inString); i++)
    {
        if (!(
              (inString[i] >= '0') && (inString[i] <= '9') ||
              (inString[i] == '-') || (inString[i] == '+')
             )
           )
        {
    	    exit(3); /* This input is a character or special symbol */
        }
    }
}

int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        exit(2); /* Two arguments needed */
    }
    validateNumber(argv[1]);
    validateNumber(argv[2]);
	int number = atoi(argv[1]);
	int position = atoi(argv[2]);
	if (position < 0)
    {
		exit(1); /* Position must be a positive number */
	}
	printf("%d\n", vzemiBitna(number,position));
    return(0); /* Test passed */
}
