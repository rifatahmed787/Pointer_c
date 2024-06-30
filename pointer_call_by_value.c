#include<stdio.h>

void fun(int x){
    printf("fun er x er address- %p\n",&x);
    x=200;
}
int main(){
        int x=100;
        printf("fun er x er address- %p\n",&x);
        fun(x);
         printf("%d\n",x);
    return 0;
}