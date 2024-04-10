#include <stdio.h>

int main() {
    int year;

    printf("Saal Ka Name bata Bhai: ");
    scanf("%d", &year);

    if (year % 4 == 0 ) {
        printf("%d Leap year Hai bhai.\n", year);
    } else {
        printf("%d Nai hai ye Leap year Bhai.\n", year);
    }

    return 0;
}
