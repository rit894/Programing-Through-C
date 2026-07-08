#include <stdio.h>

int main() {
    int days;
    scanf("%d", &days);

    int Years, Weeks, Days;

    if (days < 365 && days > 7) {
        Years = 0;
        Weeks = days / 7;
        Days = days % 7;
        printf("\nYears : %d\nWeeks : %d\nDays : %d", Years, Weeks, Days);
    }

    if (days >= 365) {
        Years = days / 365;
        int remaining = days % 365;
        Weeks = remaining / 7;
        Days = remaining % 7;
        printf("\nYears : %d\nWeeks : %d\nDays : %d", Years, Weeks, Days);
    }

    if (days <= 7) {
        Years = 0;
        Weeks = 0;
        Days = days;
        printf("\nYears : %d\nWeeks : %d\nDays : %d", Years, Weeks, Days);
    }

    
}
