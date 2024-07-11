#include <stdio.h>

int main() {
    float units, Billamount;
    float tariff[5] = {200, 300, 400, 500, 600}; // Tariff rates for different slabs
    float rates[5] = {1.5, 2.5, 3.5, 4.5, 5.5};        // Rates corresponding to each slab
    int i = 0;
    
    printf("Enter the units consumed: ");
    scanf("%f", &units);
    
    // Calculate bill amount based on the units consumed
    if (units <= 100) {
        Billamount = units * 1.2;
    } else {
        Billamount = 100 * 1.2;
        units -= 100;
        
        // Apply higher tariff slabs
        while (units > 0 && i < 5) {
            if (units <= tariff[i]) {
                Billamount += units * rates[i];
                units = 0; // Exit the loop
            } else {
                Billamount += tariff[i] * rates[i];
                units -= tariff[i];
                i++;
            }
        }
        
        // If units are still left after highest slab
        if (units > 0) {
            Billamount += units * rates[i];
        }
    }
    
    printf("Electricity bill amount: %.2f UGX\n", Billamount);
    
    return 0;
}