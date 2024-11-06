#include <stdio.h>

int main() {
    unsigned int hexValue;

    
    printf("Enter a hexadecimal value (e.g., 1A3): ");
    scanf("%x", &hexValue);

    
    printf("Decimal: %5u\n", hexValue);
    printf("Octal: %5o\n", hexValue);
    printf("Hexadecimal: %5X\n", hexValue);

    return 0;
}
