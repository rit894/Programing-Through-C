#include <stdio.h>
int main(){
    FILE *fptr;
   

    fptr = fopen ("Eg_13.txt", "w");
    fprintf(fptr , "\n hey this an additional line is it okay for you ??");
    fclose(fptr);



}