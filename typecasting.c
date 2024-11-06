#include <stdio.h>

int main() {
    float floatValue;
    int intValue;
    printf("Enter a floating point number: ");
    scanf("%f", &floatValue);
    intValue = (int)floatValue;
    printf("Original floating point value: %.2f\n", floatValue);
    printf("Truncated integer value: %d\n", intValue);

    return 0;
}
