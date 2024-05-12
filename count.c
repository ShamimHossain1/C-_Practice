#include <stdio.h>
#include <time.h>

int main() {
    // Start measuring time
    clock_t start_time = clock();
    
    // Calculate the sum from 1 to 100 trillion
    unsigned long long sum = 0;
    for (unsigned long long i = 1; i <= 100000000000000; i++) {
        sum += i;
    }
    
    // Stop measuring time
    clock_t end_time = clock();
    
    // Print the final result
    printf("Final sum in C: %llu\n", sum);
    
    // Calculate and print the time taken
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Time taken in C: %.2f seconds\n", time_taken);
    
    return 0;
}
