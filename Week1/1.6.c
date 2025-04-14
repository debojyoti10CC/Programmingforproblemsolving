#include<stdio.h>
int main(){
    int n,l,l2,i,p,q,m;
    printf("enter two numbers");
    scanf("%d %d",&n,&i);
    l=n%10;
    l2=i%10;
    p=(n/10)*10+l2;
    q=(i/10)*10+l;
    m=p*q;
    printf("the multiplication of %d and %d is %d",p,q,m);

    return 0;
}
