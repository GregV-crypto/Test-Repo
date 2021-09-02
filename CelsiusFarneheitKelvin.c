/**
 * Total conversion calculator between 3 temperature types
 * @author Greg Vincent
 * 8/17/21
 * This is version 1.0.0 of what will be known as the CFK.c program.
*/

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 1000
#define MINIMUM 1
#define KELVIN 273.15
extern float userNum;
extern char units;
extern char tempUnits;

int tempConversion()
{
   
    printf("Enter your number!");
    scanf("%f",&userNum);
    printf("Enter intial temperature unit\n");
    printf("Either ' C ', ' K ', ' F, ' thank you: ");
    scanf(" %c ", &units);
    /**
     * Conversion starting in Celsius
    */
    if(units == 'C')
    {
        printf("What unit do you want to convert to?\n");
        scanf("%c", &tempUnits);
        if(tempUnits == 'C')
        {
            printf("You're already in Celsius!\n");
        }
        else if(tempUnits == 'F')
        {
            printf("Beginning conversion into Farenheit...\n");
            float resultOne;
            resultOne = 32.0 + (userNum * (9.0/5.0));
            printf("Your result in Farenheit: %f\n ", resultOne);
            return resultOne;
        }
        else if (tempUnits == 'K')
        {
            printf("Beginning conversion into Kelvin...\n");
            float resultTwo;
            resultTwo = 273.15 + userNum;
            printf("Your result in Kelvin: %f\n", resultTwo);
            return resultTwo;
        }
    }
    /**
     * Conversion starting in Farenheit
    */
    else if(units == 'F')
    {
        printf("What unit do you want to convert to?");
        scanf(" %c ", &tempUnits);
        if(tempUnits == 'F'){
            printf("You're already in Farenheit!");
        }
        else if(tempUnits == 'C'){
            printf("Beginning conversion into Celsius...");
            float resultThree;
            resultThree = userNum - 32.0 * (5.0/9.0);
            printf("Your result in Celsius: %f\n " , resultThree);
            return resultThree;
        }
        else if(tempUnits == 'K'){
            printf("Beginning conversion into Kelvin...");
            float resultFour;
            resultFour = userNum - 32.0 * (5.0/9.0) + KELVIN;
            printf("Your result in Kelvin: %f\n ", resultFour);
            return resultFour;
        }
        
    }
    /**
     * Conversion starting in Kelvin
    */
    else if(units == 'K'){
        printf("What unit do you want to convert to?");
        scanf(" %c ", tempUnits);
        if(tempUnits == 'K'){
            printf("You're already in Kelvin!");
        }
        else if(tempUnits == 'F'){
            printf("Beginning conversion into Farenheit...");
            float resultFive;
            resultFive = userNum - KELVIN * (9.0/5.0) + 32.0;
            printf("You're result in Farenheit: %f\n", resultFive);
            return resultFive;
        }
        else if(tempUnits == 'C'){
            printf("Beginning conversion into Celsius...");
            float resultSix;
            resultFive = userNum - KELVIN;
            printf("You're result in Farenheit: %f\n", resultSix);
            return resultSix;
        }

        
    }
}
int main()
{
    tempConversion();
}
