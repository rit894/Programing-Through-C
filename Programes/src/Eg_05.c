#include <stdio.h>
#include <string.h>
int main(){
    char Text [50];
   printf("Enter the text here: ");
    scanf("%s", Text);
    int lenght = strlen(Text);
    for(int i=lenght; i>=0;i--) {
        printf("%c",Text[i]);
    }
}