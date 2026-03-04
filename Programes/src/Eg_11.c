#include <stdio.h>
int main(){
    printf("Enter Hours : ");
    int hours;
    scanf("%d",&hours);
    printf("Enter Min : ");
    int min;
    scanf("%d",&min);
    printf("Enter seconds: ");
    int sec ;
    scanf("%d",&sec);
    int totalSec = (hours*3600)+(min*60)+sec;

    printf("%d",totalSec);


}