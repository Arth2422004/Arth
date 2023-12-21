
#include <stdio.h>
int main()
{
    int num, temp, rev=0, digit, sumOfDigits=0;
 
    printf("Enter a Number \n");
    scanf("%d",&num);
    
    
    temp = num;
 
    while(temp > 0){

        sumOfDigits += temp % 10;  
        temp = temp / 10;      
    }

 
   temp = sumOfDigits;

    while( temp > 0){
        rev = rev*10 + temp % 10; 
        temp = temp / 10;
    }
 
    if(rev*sumOfDigits == num)
        printf("Magic Number \n");
    else
        printf("Not a Magic Number \n");
 
    return 0;
}