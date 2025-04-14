#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    int original_a=a,original_b=b;
    printf("Before swapping a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swap a=%d b=%d",a,b);
    a=original_a;
    b=original_b;
    printf("before swap a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap a=%d b=%d",a,b);
    return 0;


}