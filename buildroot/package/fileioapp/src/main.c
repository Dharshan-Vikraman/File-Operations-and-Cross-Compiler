#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char buffer[256];

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return EXIT_FAILURE;
    }

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return EXIT_FAILURE;
    }

    // Read from input file and write to output file
    while (fgets(buffer, sizeof(buffer), inputFile)) {
        fprintf(outputFile, "%s", buffer);
    }

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    printf("File operations completed successfully.\n");
    return EXIT_SUCCESS;
}
