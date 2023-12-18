#include <stdio.h>

int main() {
    
    float Charges, Bill;

    printf("Enter the charges: ");
    scanf("%f", &Charges);

  
    if (Charges <= 50) {
        Bill = Charges * 0.50;
    } else if (Charges <= 150) {
        Bill = 50 * 0.50 + (Charges - 50) * 0.75;
    } else if (Charges <= 250) {
        Bill = 50 * 0.50 + 100 * 0.75 + (Charges - 150) * 1.20;
    } else {
        Bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (Charges - 250) * 1.50;
    }


    Bill = Bill + 0.20 * Bill;

    printf("Total Bill: Rs. %.2f\n", Bill);

    return 0;
}
