#include<stdio.h>


void fun(int ar[], int n){
    // for(int i=0; i<n; i++){
    //     printf("%d ", ar[i]);
    // }
}
int main(){

    int ar[5]={10, 20, 30, 40, 50};
    fun(ar, 5);
    printf("%d\n", *ar);
    printf("%d\n", *(ar+1));
    printf("%d\n", *(ar+2));
    return 0;
}