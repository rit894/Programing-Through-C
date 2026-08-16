#include <stdio.h>

int searchElement(int p[], int len, int key) {
    for (int i = 0; i < len; i++) {
        if (p[i] == key) {
            return i + 1;   // position (1-based)
        }
    }
    return -1; // not found
}

void sort(int p[],int len ){

    for(int i = 0 ; i< len; i++){
        for(int j = 0 ; j <len -i-1 ; j++){
            if(p[j]>p[j+1]){
                int temp ;
                temp = p[j];
                p[j]= p[j+1];
                p[j+1] = temp;
            }
        }
    }

    
}

int main() {
    int n;
    printf("Enter the number of Employees : ");
    scanf("%d", &n);

    int salary[n];
    printf("Enter the salaries in order : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &salary[i]);
    }

    int key;
    printf("Enter the salary to search : ");
    scanf("%d", &key);

    int pos = searchElement(salary, n, key);

    if (pos == -1)
        printf("Salary not found\n");
    else
        printf("Salary found at position %d\n", pos);

    sort(salary, n);
    printf("\n Sorted Array : ");
    for (int i =0 ; i< n ; i++){
        printf("%d " , salary[i]);

    }

    int HTC =0;
    int MTC = 0;
    int LTC =0;

    for(int i =0 ; i<n ; i++){
        if (salary[i]>500){
            HTC ++;
        }
        else if (salary[i]>250 && salary[i]<500){
            MTC++;
        }
        else if( salary[i] <250){
            LTC ++;
        }
    }

    printf(" \n HTC : %d MTC : %d LTC : %d" , HTC, MTC, LTC);
    
    
}
