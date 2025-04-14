#include<stdio.h>
int main(){
    int n,m,i;
    printf("enter the number");
    scanf("%d",&n);
    m=n%10;
    m=m*2;
    i=(n/10)*10+m;
    printf("%d",i);

    return 0;
}