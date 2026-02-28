#include <stdio.h>
int main(){
    int checkNumber;
    int divisiors [checkNumber];
    int count = 0;
    printf("Enter Your number: " );
    scanf("%d",&checkNumber);
    for(int i =1 ;i<checkNumber;i++){
        if(checkNumber%i == 0){
            divisiors[count++]=i;
        }else{
            continue;
        }
    }
    int sum = 0;
   for(int j =  0; j<count;j++){
        sum+=divisiors[j];
   }
   if(sum==checkNumber){
    printf("%d is a perfect number",checkNumber);
   }else{
    printf("%d is not a perfect number\n",checkNumber);
    printf("%d",sum);
   }

}