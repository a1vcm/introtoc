#include <stdio.h>

void recursion (int a){
    if (a == 20){
        printf("%d\n", a);
    }
    else{
        a+=2;
        printf("%d\n", a);
        recursion(a);
    }
}
int main (void){
    printf("Hello\n");
    recursion(2);
}
