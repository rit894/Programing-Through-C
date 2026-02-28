#include <stdio.h>
#include <string.h>
int main(){
    char TestData[2000] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo    ";
    

 int Uppercase = 0;
 int LowerCase = 0;
  int length = strlen(TestData);
    for (int i =0;i<length;i++){
        if(TestData[i]<90 && TestData[i]>65 ){
            Uppercase++;
        }else if (TestData[i]<122 && TestData[i]>97){
            LowerCase++;
        }
    }
    printf("Uppercase: %d\n", Uppercase);
    printf("LowerCase: %d\n", LowerCase);
}