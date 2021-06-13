#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

const float PI = 3.14159;

float areaEclipse(const float PI, float A, float B)
{
    return PI * A * B;
}

void validateNumber(char *inString)
{
    for (int i = 0; i < strlen(inString); i++)
    {
        if (!(
              (inString[i] >= '0') && (inString[i] <= '9') ||
              (inString[i] == '.') || (inString[i] == ',')
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
    float A = atof(argv[1]);
    float B = atof(argv[2]);

    printf("Area of Eclipse is %f\n", areaEclipse(PI, A, B));

    return 0;
}
