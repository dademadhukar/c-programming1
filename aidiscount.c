#include <stdio.h>

 int main() {
    float price, discount, discountedPrice;
    
    printf("Enter the price of the product: ");
    scanf("%f", &price);
    
    if (price > 20000) {
        discount = 0.10; // 10% discount
    } else {
        discount = 0.05; // 5% discount
    }
    
    discountedPrice = price - (price * discount);
    
    printf("Discounted price: %.2f\n", discountedPrice);
    
    return 0;
}

