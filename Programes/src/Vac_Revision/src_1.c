#include <stdio.h>
int main(){
    
    printf("Hello World \n"); // printing statements

    // Assigning values to variables
     // type  var_name = value ;
     int a = 10;
     char b = 'A';
     float c= 2.14;
     char* d = " Hello ";

     printf("the value of d is %s \n",d);
     printf("the value of a is %d \n ", a);
     printf("the value of c is %c \n ", b);
     printf("the value of c is %f \n ", c);

     int x= 5, y=5 , z = 9;
     printf("the value of x , y , z are %d , %d , %d \n", x, y, z);

     printf("%zu",sizeof(a));


     const int minPerHour = 60; // constant variable cannot be changed fr they r just like  final in java
        printf("the value of minPerHour is %d \n", minPerHour);
        



}