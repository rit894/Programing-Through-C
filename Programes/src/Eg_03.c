// While loops
#include <stdio.h>
    int main(){

        // int a;
        // int sum = 0;
        // scanf("%d",&a);
        // while(a!=-1){
        //   sum += a;
        //   scanf("%d",&a);
         
        // } printf("%d\n",sum);
        
        // GCD
        int x ,y;
        int t;
        int gcd;
        scanf("%d %d",&x,&y);
        if (x<y){
            t=x;
            x=y;
            y=t;
        }
        // printf("%d\n",x);
        // printf("%d\n",y);
        while(gcd!=0){
            gcd = x%y;
            x=y;
            y=gcd;
        }
        printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",gcd);
    }

