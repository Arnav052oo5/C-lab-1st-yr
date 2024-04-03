#include <stdio.h> 

int main() 
{ 
int yr;
printf("Enter the year :");
scanf("%d", &yr);


 
(yr % 4 == 0 && (yr % 100 != 0 || yr % 400 == 0)) ? printf("The year %d is not a leap year",yr)
  : printf("The year %d is not a leap year",yr); 
 return 0; 
} 

