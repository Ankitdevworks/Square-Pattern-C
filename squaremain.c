#include <stdio.h>
#include "square.h"
int input() ;
int main(){
    square(input()) ;
    return 0 ;
}
int input(){
    int a ;
    printf("enter the number: ") ;
    scanf("%d",&a) ;
    return a ;
}