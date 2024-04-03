#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Enter the third number :");
    scanf("%d",&c);
    
    d=(b*b)-4*a*c;
    (d>=0) ? printf("The root is real\n")
            :printf("The root is imaginary\n");
    
    return 0;
    }  