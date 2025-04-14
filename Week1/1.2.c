#include<stdio.h>
int main(){
    int n;
    printf("enter any number");
    scanf("%d",&n);
    printf("Last digit:%d\n After deletion:%d\n",n%10,n/10);
    return 0;
}