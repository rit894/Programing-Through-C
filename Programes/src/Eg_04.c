#include <stdio.h>
int main(){
    int length;
    length=1;
    int n;
    scanf("%d",&n);
    int a=n;
    while(n!=-1){
        scanf("%d",&n);
        int b=n;
        if (b>a){
           a=b;
            length+=1;
        }
    }
    printf("%d\n",length);
}
