// Structures are discuused over here
#include <stdio.h>
#include <string.h>
   struct MyStructure  {

        int mynum ;
        char mychar;
        char name[30];
        

    };
int main(){

    

    // printf("My num : %d ",s1.mynum);

    // s1.mynum = 13;
    // s1.mychar = 'a';

    // printf("this is the original Number : %d\n", s1.mynum);
    // printf("this is the original char : %c\n",s1.mychar);

    // strcpy(s1.name, "Rithwik");

    // printf("this is my original Name : %s",s1.name);

    // simpler structure ig ??

    struct MyStructure s2 = { 13, 'B',"someText"};

    printf("%d %c %s", s2.mynum, s2.mychar, s2.name);

    // Copying Structures
    struct MyStructure s3;
    s3=s2;
    

    







 
}