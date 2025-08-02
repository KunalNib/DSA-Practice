#include<stdio.h>
int main(){
    int n;
    printf("enter the interger");
    scanf("%d",&n);
    int x;
    printf("enter power");
    scanf("%d",&x);
    int pow=1;
    for(int i=0;i<x;i--){
        pow*=n;
    }
    printf("%d",pow);
}