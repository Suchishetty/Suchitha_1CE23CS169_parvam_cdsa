#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);


    if (isalpha(ch)) {
        if (islower(ch)) {
        
            ch = toupper(ch);
        } else if (isupper(ch)) {
            
            ch = tolower(ch);
        }
        printf("Converted character: %c\n", ch);
    } else {
        printf("Input is invalid\n");
    }

    return 0;
}
