#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive step
    }
}

int main() {
    int num;
    long long result;
    FILE *inputFile, *outputFile;

    // Open input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt\n");
        return 1; // Indicate error
    }

    // Read number from input file
    fscanf(inputFile, "%d", &num);
    fclose(inputFile); // Close input file

    // Calculate factorial
    result = factorial(num);

    // Open output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt\n");
        return 1; // Indicate error
    }
    fprintf(outputFile, "Factorial of %d is: %lld\n", num, result);
    fclose(outputFile); // Close output file

    printf("Factorial calculated and written to output.txt\n");

    return 0;
}