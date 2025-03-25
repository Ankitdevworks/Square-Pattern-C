#include <stdio.h>
#include "square.h"
#define g ( i - a )
void square(int a){
    for(int i = 0 ; i <= (2*a) - 2 ; i++){
    if(i < a){
        for(int j = 1 ; j <= a - i && i <= a ; j++ ){
            printf("%3d",j) ;
        }
        for(int k = 1 ; k <= i && i <= a ; k++){
            printf("   ") ;
        }
        if(i==0){
            for(int b = a-1 ; b > 0 && i <= a ; b--){
                printf("%3d",b) ;
            }
        }
        else{
            for(int c = i - 1 ; c > 0 && i <= a ; c--){
                printf("   ") ;
            }
            for(int d = a - i ; d > 0 && i <= a ; d--){
                printf("%3d",d) ;
            }
        }
        printf("\n") ;
    }
    else{
       for( int m = 1 ; m <= g + 2 ; m++){
        printf("%3d",m) ;
       }
       for( int n = a - 2 - g ; n > 0 ; n--){
        printf("   ") ;
       }
       for(int r = a - 3 - g ; r > 0 ; r--){
        printf("   ") ;
       }
       for(int s = g + 2 ; s > 0  && i < 2*(a-1); s--){
        printf("%3d",s) ;
       }
       if(i == 2*(a-1)){
        for(int y = a-1 ; y > 0 ; y--){
            printf("%3d",y) ;
        }
       }
       printf("\n") ;
    }
    }
}