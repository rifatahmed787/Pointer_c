#include<stdio.h>
int main(){

    int x=100;

    int * p=&x;
    x=200;
    printf("p=%p\n", p);
    printf("x=%d\n", *p);
    return 0;
}