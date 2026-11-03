#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Function to calculate the maximum and, or, and xor values less than k
void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    // Iterate through all possible pairs (i, j) where 1 <= i < j <= n
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int and_val = i & j;
            int or_val = i | j;
            int xor_val = i ^ j;

            // Check and update maximum for AND
            if (and_val < k && and_val > max_and) {
                max_and = and_val;
            }
            // Check and update maximum for OR
            if (or_val < k && or_val > max_or) {
                max_or = or_val;
            }
            // Check and update maximum for XOR
            if (xor_val < k && xor_val > max_xor) {
                max_xor = xor_val;
            }
        }
    }

    // Print the results on separate lines
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
