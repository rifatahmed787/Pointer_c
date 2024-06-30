#include<stdio.h>

void fun (int*p){
    printf("%p\n", p);
    *p=200;
}
int main(){

    int x=100;
    
    printf("x=%p\n", &x);
   
    fun(&x);
     printf("x=%d\n", x);
    return 0;
}