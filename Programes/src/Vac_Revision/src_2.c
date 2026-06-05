#include<stdio.h>
#include <stdbool.h>

int main(){

    int a = 10;
    int b = 20;
    int sum = a + b;
    printf("the sum of a and b is %d \n", sum);

    int sub = a - b;
    printf("the sub of a and b is %d \n", sub);

    int mul = a * b;
    printf("the mul of a and b is %d \n", mul);

    float div = (float)a / (float)b; // type casting
    printf("the div of a and b is %f \n", div);

    // operators are mostly same as if in python 
    // && - and operator 
    // || - or operator
    // ! - not operator

    // use # include <stdbool.h> for a boolean datatype in c

    bool isProgrammingfun = false ;

    // Conditional statements (if and else statements)

    if(isProgrammingfun){
        printf("Programming is fun \n");
    }
    else{
        printf("Programming is not fun \n");
    }

    char* result = (isProgrammingfun)? "Yeahhh" : "hell nah";

    printf("Result: %s\n", result);


    int countdown = 3;

while (countdown > 0) {
  printf("%d\n", countdown);
  countdown--;
}
printf("Happy New Year!!\n");

}