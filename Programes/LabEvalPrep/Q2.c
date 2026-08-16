#include<stdio.h>

int main(){

    int n ;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    int book[n];
    printf("\n Enter the 5 Books ID's : " );
    for(int i =0; i<n; i++){
        scanf("%d",&book[i]);
    }
    int search ;
    printf("\n ENter the book Needed to search : ");
    scanf("%d",&search);
    int f = 0;
    int pos = 1;
    for(int i =0; i<n ; i++){
        if(book[i] == search){
            f =1;
            
            printf("FOund");
            printf("postion at : %d", pos);
            break;
        }
        else{
            pos++;
        }
    }

    if(!f){
        printf("Not found");
    }

}