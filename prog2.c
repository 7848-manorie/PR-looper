/*program to count total number of digits in a number*/
#include<stdio.h>
void main(){
    int n,count=0;
    printf("enter any number:");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        count++;
    }
    printf("Total number of digit:%d",count);
}