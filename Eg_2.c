#include <stdio.h>
 int main(){
    int year = 2500;
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("%d is a Leap Year       \n", year);
    }else{
        printf("%d is not a Leap Year   \n", year);
    }
}