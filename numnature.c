#include <stdio.h>

int main() {
    int number;

    printf("Number Daal Bhai: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d even number hai Bhai.\n", number);
    } else {
        printf("%d ye odd number hai .\n", number);
    }

    return 0;
}
