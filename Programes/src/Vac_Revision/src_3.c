#include <stdio.h>
#include <string.h>
int main(){
    // Arrays  is disccused here in this part 
    int arr[] = {1,2,3,4,5,6};
    for(int i = 0 ; i<6; i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    printf("the size %zu",sizeof(arr));
    printf("\n");

    int length = sizeof(arr)/  sizeof(arr[0]);
    printf("the length of the array is %d \n", length);

    //  C Strings 
    // use # include <string.h> for string functions in c
  char str[50] = "hello world";  // allocate extra space
printf("%zu\n", strlen(str));

strcat(str, "!!!");  // safe now
if(strcmp(str, "hello world!!!") == 0){
    printf("the strings are equal\n");
} else {
    printf("the strings are not equal\n");
}

if(str == "hello world!!!"){
    
    printf("the strings are equal\n");
} else {
    printf("the strings are not equal\n");



}
}