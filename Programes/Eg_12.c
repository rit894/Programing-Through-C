#include <stdio.h>
#include <string.h>

int main(){

    printf("Enter the string: ");
    char string[20];
    scanf("%s", &string);
    printf("Enter the Number(same size as String): ");
    int integers[20];
    int length = strlen(string);
    for(int i =0; i<length;i++){
        scanf("%d", &integers[i]);
    }
    for(int i =0; i<length;i++){
        char c = string[i];
        int n = integers[i];
        c=c+n;
        string[i] = c;
        printf("%c",c);
    }
    
        
    




}