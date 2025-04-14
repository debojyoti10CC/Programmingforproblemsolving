#include<stdio.h>
int main(){
    int n,l,sl,rem,nn;
    printf("enter a number");
    scanf("%d",&n);
    l=n%10;
    sl=(n/10)%10;
    rem=n/100;
    nn=(rem*100)+(l*10)+sl;
    printf("%d",nn);
    return 0;
}