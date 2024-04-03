#include <stdio.h>
int main(){
 int a;
 printf("Input the number:");
 scanf("%d",&a);
 
 (a%2==0) ? printf("The number is even.")
 	        :printf("The nuber is odd.");
 	
 return 0;
 }