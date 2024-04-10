#include <stdio.h>

int main() {
    int startYear, endYear;

    printf("Enter The starting  year: ");
    scanf("%d", &startYear);

    printf("Enter The ending year: ");
    scanf("%d", &endYear);

    printf("Leap years between %d and %d:\n", startYear, endYear);

    for (int year = startYear; year <= endYear; year++) {
        if (year % 4 == 0 )
            printf("%d\n", year);
    }

    return 0;
}
