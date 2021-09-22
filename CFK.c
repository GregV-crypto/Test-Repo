/**
 * Total conversion calculator between 3 temperature types
 * @author Greg Vincent
 * 9/2/21
 * Last modified 9/22/21
 * Each new version is a different software
 * Next will be:
 * - Cleaning up 1.5 code
 * - Adding a regular calculator
 * - Separating functions so that code is not entirely in main
*/

/**
 * Version 1.5. 
 * About 50% of the code is different when compared to version 1.
 * Still not a 100% difference, in the sense that the same basic code and variables are used 
 * 
 * 
*/
/***
         * Different temperature combinations
         * Celsius Exception
         * Celsius to Farenheit
         * Celsius to Kelvin
         * Farenheit Exception
         * Farenheit to Celsius
         * Farenheit to Kelvin
         * Kelvin Exception
         * Kelvin to Fareneheit
         * Kelvin to Celsius
*/
#include <stdio.h>
#include <stdlib.h>
/** 
 * Different numbers used for conversions
*/
#define KELVIN 273.15
#define CELSIUS 32.0

int main()
{    
    float userInput,result;
    char strt,end;
    printf("Enter your number!\n");
    scanf("%f", &userInput);
    printf("Enter intial temperature unit: ");
    scanf(" %c\n ", &strt);
    printf("Enter conversion unit: ");
    scanf(" %c\n ", &end);
    /** 
     * Celsius Exception
     */
    if (strt == 'C' && end == 'C'){
        printf("You're already in Celsius!\n");
        return 0;
    }
    /** Celsius to Farenheit */
    else if(strt == 'C' && end == 'F'){
         printf("Beginning conversion into Farenheit...\n");
         result = CELSIUS + (userInput * (9.0/5.0));
         printf("Your result is %0.2f\n", result); 
         return result;
    }
    // /** Celsius to Kelvin */
    else if (strt == 'C' && end == 'K'){
        printf("Beginning conversion into Kelvin...\n");
        result = userInput + KELVIN;
        printf("Your result is %0.2f\n", result);
        return result;
    }
    /** Farenheit to itself */
    else if (strt == 'F' && end == 'F'){
        printf("You're already in Farenheit\n");
        return 0;
    }
    /** Farenheit to Celsius */
    else if (strt == 'F' && end== 'C'){
        printf("Beginning conversion into Celsius...\n");
        result = (userInput - CELSIUS) * (5/9);
        printf("Your result is %0.2f\n", result);
        return result;
    }
    /** Farenheit to Kelvin*/
    else if (strt == 'F' && end == 'K'){
        printf("Beginning conversion into Kelvin...\n");
        result = (userInput - CELSIUS) * (5/9) + KELVIN;
        printf("You're result is %0.2f\n",result);
        return result;
    }
    /** Kelvin to Kelvin */
    else if(strt == 'K' && end == 'K'){
        printf("You're already in Kelvin\n");
        return 0;
    }
    /** Kelvin to Celsius */
    else if(strt == 'K' && end == 'C'){
        printf("Beginning convesion into Celsisu...\n");
        result = result - KELVIN;
        printf("Your result is %0.2f\n", result);
        return result;
    }
    /** Kelvin to Farenheit*/
    else if(strt == 'K' && end == 'F'){
        printf("Beginning convesion into Farenheit");
        result = (userInput - KELVIN) * (9.0/5.0) + CELSIUS;
        printf("Your result is %0.2f", result);
        return result;
    }
    else{
        printf("Enter in a valid input! Try again!\n");
        return 0;
    }
    
 
}