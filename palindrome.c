#include <stdio.h>

int main() {
    int num,reverse=0,remainder,orginal;
    printf("enter any integers:");
    scanf("%d",&num);
    orginal=num;
    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    
    }
    if(orginal==reverse)
    {
        printf("%d is a palindrome\n",orginal);
        printf(" ");
        
    }
    else
    {
        printf("%d is not a palindrome\n",orginal);
    }
   
    return 0;
    
}