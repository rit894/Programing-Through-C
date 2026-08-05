    #include <conio.h>
#include <stdio.h>
int main(){
    int ID;
    printf("Enter the employees ID : ");
    scanf("%i",&ID);
    int Workinghrs ;

    printf(" ENter the number of hrs : ");
    scanf("%i",&Workinghrs);
    int SalaryPhr;
    printf("\nenter the salary/hr :");
    scanf("%i",&SalaryPhr);

    printf("\nOUTPUT : ");
    printf("employess ID : %i",ID);
    int salary = Workinghrs *SalaryPhr;
    printf("\nSalary : %i",salary);

    char ch;
    ch = getch();       // Accepts a character
    fflush(stdin);      // Clears input buffer
    putch(ch);





}