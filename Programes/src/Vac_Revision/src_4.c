#include <stdio.h>
int main (){
    int mynum [] = {1,2,3,4,5,6};
    int len = sizeof(mynum )/sizeof(mynum[0]);
    printf("%d\n", len);
    for(int i = 0 ; i<len ; i++){
        printf("%d ", mynum[i]);
        printf("\n");
    }
int  mynume ;
printf("Enter the new number : ");
scanf("%d",&mynume);
printf ("the new number is : %d", mynume);

char  name [100];
printf("Enter your name Bruhh : ");
scanf("%s",name);
printf("the name is : %s", name);
}