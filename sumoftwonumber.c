#include <stdio.h>

int main() {
    int i;
    int sum=0;
    for(i=0;i<=10;i++)
    {
        sum+=i;
    }
    printf("sum of 10 natural numbers\n %d",sum);
    return 0;
}