#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    int array[N];

    for (int i = 0; i < N; i++) {
        printf("Enter the number: ");
        scanf("%d", &array[i]);
    }

    
    printf("Array elements: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


    char lastDigits[N + 1]; 
    for (int j = 0; j < N; j++) {
        int a = array[j] % 10;
        for (int k = 0; k < j; k++) {
           
           if(a<10){
            break;
           }else{
            int temp = a;
            a = temp % 10;
           }
        }
        
        lastDigits[j] = '0' + a;
    }
    lastDigits[N] = '\0';

    printf("Last digits string: %s\n", lastDigits);

    int lastdigits = atoi(lastDigits);
    printf("As integer: %d\n", lastdigits);

    if(lastdigits % 10 == 0) {
        printf("The last digits are divisible with 10\n");
    } else {
        printf("The last digits are not divisible with 10 \n");
    }

    return 0;
}
