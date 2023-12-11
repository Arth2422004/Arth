#include <stdio.h>

int main()
{
int x, y;
printf("Enter Value of x ");
scanf("%d", &x);
printf("\nEnter Value of y ");
scanf("%d", &y);
 int z = x;
    x = y;
    y = z;
    
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
 return 0;
}
