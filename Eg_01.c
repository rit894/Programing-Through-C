#include <stdio.h>
 int main(){
    float centigrades;
    float fahrenheit;
    
    centigrades = 50;
    fahrenheit = ((centigrades * 9) / 5) + 32;
    printf("Celicus:%f \n",centigrades);
    printf("Fahrenheit:%f\n",fahrenheit);

int myNum = 15;
char myLetter = 'D';
printf("My number is %d and my letter is %c", myNum, myLetter);
}


//NOTES


/* Types of variables in C */
// 1. int - for integers
// 2. float - for floating point numbers
// 3. double - for double precision floating point numbers
// 4. char - for characters

/* C format Specifiers */
// %d - for integers
// %f - for floating point numbers
// %lf - for double precision floating point numbers
// %c - for characters