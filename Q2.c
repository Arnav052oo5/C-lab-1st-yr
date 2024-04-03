#include<stdio.h>
void main(){
int a;
printf("Enter the number : ");
scanf("%d",&a);
while(a>0){
printf("The byte are : %d\n",(a>>0)%10);
a=a/10;
}
}