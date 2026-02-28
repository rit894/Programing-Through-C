#include <stdio.h>
 int main(){
    int inumber;
    printf("Enter the intial number:");
    scanf("%d",&inumber);
    int fnumber;
    printf("Enter the final Number : ");
    scanf("%d",&fnumber);
    
    for(int k = inumber; k<fnumber;k++){
    
    int divisiors [k];
    int count = 0;
    
    for(int i =1 ;i<k;i++){
        if(k%i == 0){
            divisiors[count++]=i;
        }else{
            continue;
        }
    }
    int sum = 0;
   for(int j =  0; j<count;j++){
        sum+=divisiors[j];
   }
   if(sum==k){
    printf("%d is a perfect number\n",k);
   }

    }
 }