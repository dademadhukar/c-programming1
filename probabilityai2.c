#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target = 4; // The target number on the die
    int numRolls = 1000; // Number of times the die is rolled
    int count = 0;

    srand(time(0)); // Seed for random number generation

    for (int i = 0; i < numRolls; i++) {
        int roll = rand() % 6 + 1; // Random number between 1 and 6 (inclusive)
        if (roll == target) {
            count++;
        }
    }

    float probability = (float)count / numRolls;
    printf("Probability of rolling a %d: %.2f\n", target, probability);
    return 0;
}

