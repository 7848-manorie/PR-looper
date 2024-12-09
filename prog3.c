/*program to count total number of digits in a number*/
#include<stdio.h>
void main(){
    int n,first,last;
    printf("enter any number:");
    scanf("%d",&n);

    last=n%10;
    
    while(n!=0){
        first=n;
        n=n/10;
    }
    printf("Total sum of first and last digit:%d",first+last);
}