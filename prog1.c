/*print all alphabets from 'a' to 'z' by skipping 3 alphabets using do while loop*/
#include<stdio.h>
void main(){
    int i=97;
    do{
        printf("\n%c",i);
        i=i+4;
    }
    while(i<=122);
}