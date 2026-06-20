#include <stdio.h>


    static inline int add(int a, int b) {
    return a + b;
}

int main(){


    // inline functions uses the keyword inline 

    printf("THe sum of two numbers is : %d",add(5,6));


   

    

}