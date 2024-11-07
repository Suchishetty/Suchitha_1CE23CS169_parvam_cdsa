#include <stdio.h>

int main() {
    int*ptr=(int*)malloc(sizeof(int));//4bytes of mem for pointer<-type casting
    *ptr=10;
    printf("bfr free %d",*ptr);//10
    free(ptr);
    printf("after free %d",*ptr);//random
    return 0;
    
    
}
