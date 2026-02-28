#include <stdio.h>
#include <math.h>
int main(){

    int number;
    int digits[20];
    printf("Enter the number here : ");
    scanf("%d",&number);
    int count = 0;
    int temp = number;

    
    while (temp > 0) {
        digits[count++] = temp % 10;
        temp /= 10;
    }
    int sum;
    for(int j = 0; j<count;j++){
        sum+=pow(digits[j],count);
    }
    printf("%d\n",sum);
    if (sum==number){
        printf("this is a armstrong Number");
    }else{
        printf("Nope thats not it another time mate;;");
    }
}
